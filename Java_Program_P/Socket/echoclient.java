import java.io.*;
import java.net.*;

class echoclient
{
      public static void main(String args[])throws IOException
      {
	Socket s = new Socket("localhost",81);
	
	InputStream is = s.getInputStream();
	DataInputStream dis = new DataInputStream(is);
	OutputStream os = s.getOutputStream();
	DataOutputStream dos = new DataOutputStream(os);

	while(true)
	{
		DataInputStream mydis = new DataInputStream(System.in);
		String s1 = mydis.readLine();
		dos.writeUTF(s1);
		System.out.println("Server says......."+dis.readUTF());	       
	}
       }
}