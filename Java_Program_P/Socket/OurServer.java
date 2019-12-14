import java.net.*;
import java.io.*;
import java.util.*;

public class OurServer
{
	public static final int PORT = 81;
	ServerSocket sst;
	OurSocket os;

	Vector morning = new Vector();
	Vector night = new Vector();
	public static void main(String [] args)
	{
		new OurServer().init();
	}

	public void init()
	{
		try
		{
			BufferedReader in;
			String line;

			in = new BufferedReader(new InputStreamReader(new FileInputStream("morning.txt")));
			while((line = in.readLine()) != null)
			{
				morning.addElement(line);
			}
			in.close();

			in = new BufferedReader(new InputStreamReader(new FileInputStream("night.txt")));
			while((line = in.readLine()) != null)
			{
				night.addElement(line);
			}
			in.close();

			sst = new ServerSocket(PORT);
			while(true)
			{
				System.err.println("Here's the Server...ready and running.");
				os = new OurSocket(sst.accept());
				String s = os.readLine();
				System.out.println("Read "+s+" from client.  ");
				if(s.equalsIgnoreCase("morning"))
				{
					send(morning);
				}
				else if(s.equalsIgnoreCase("night"))
				{
					send(night);
				}
				else
				{
					System.err.println("Invalid request: "+s);
				}
				os.close();
				System.err.println("Finished processing !!");
			}
		}
		catch(Exception ex)
		{
			ex.printStackTrace();
		}
	}

	public void send(Vector v) throws IOException
	{
		int size = v.size();
		for(int i = 0; i<3;i++)
		{
			int n = (int)(Math.random()*size);
			os.println(( String ) v.elementAt(n));
		}
	}
}