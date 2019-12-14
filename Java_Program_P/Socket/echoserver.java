import java.io.*;
import java.net.*;

class echoserver
{
     public static void main(String args[])
     {
	try
	{
	ServerSocket ss = new ServerSocket(81);
	Socket s1 = ss.accept();
	System.out.println("Recived.....");
	
	InputStream is = s1.getInputStream();
	DataInputStream dis = new DataInputStream(is);
	OutputStream os = s1.getOutputStream();
	DataOutputStream dos = new DataOutputStream(os);

	String str;

	while(true)
	{
	      str = dis.readUTF();
	      System.out.println(str);
	      dos.writeUTF(str);
	      System.out.println("sent");    
	}	
	}
	catch(Exception e)
	{
 	       System.out.println(e);
	}
     }
}