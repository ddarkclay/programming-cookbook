import java.io.*;
import java.util.Scanner;
class File_Read_4
{
	public static void main(String args[]) throws IOException
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter File Name : ");
		String fname = s.next();
		char str[] = new char[200];
		try
		{
			File f1 = new File(fname);
			InputStream fin = new FileInputStream(fname);
			if(f1.exists()== true)
			{
				char ch[] = new char[200];
				int size = fin.available();
				for(int i=0;i<size;i++)
				{
					   ch[i] = ((char)fin.read());
					   System.out.print(ch[i]);
				}
				System.out.println("");
				fin.close();
			}
		}
		catch(IOException e)
		{
			System.out.print("File Does not Exist !");
		}
	}
}
