//Clientside chating using TCP/IP

import java.io.*;
import java.net.*;

public class client
{
     public static void main(String args[])
     {
	try
	{
	Socket sckt;
	InetAddress localhost = InetAddress.getLocalHost();
	sckt = new Socket(localhost,81);
	DataInputStream clientin = new DataInputStream(System.in);
	DataInputStream in = new DataInputStream(sckt.getInputStream());
	PrintStream out = new PrintStream(sckt.getOutputStream());
	
	       while(true)
	      {
		String data2 = in.readLine();
		System.out.println(data2);
		String data1 = clientin.readLine();
		out.println(data1);
	       }
	}
	catch(Exception e)
	{
	       System.out.println(e);
	}
      }
}