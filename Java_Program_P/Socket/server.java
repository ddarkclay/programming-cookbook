//Serverside chating using TCP/IP

import java.io.*;
import java.net.*;

public class server
{
	Socket clnt;
	public server(Socket s)
	{
	       clnt = s;
	       runserver();
	}
     public static void main(String args[])
     {
	ServerSocket ss;
	try
	{
	
	ss = new ServerSocket(81);
	System.out.println("server socket created");
	System.out.println("SS :  "+ss);
	while(true)
	{
	       Socket st;
	       st = ss.accept();
	       System.out.println("Socket Recorded");
	       new server(st);
	}
              }
          catch(Exception e)
         {
               System.out.println(e);
          }
      }
       public void runserver()
       {
	try
	{
	DataInputStream in = new DataInputStream(System.in);
	DataInputStream userin = new DataInputStream(clnt.getInputStream());
	PrintStream out = new PrintStream(clnt.getOutputStream());
	
	       while(true)
	      {
		String data1 = userin.readLine();
		System.out.println(data1);
		String data2 = in.readLine();
		out.println(data2);
	       }
	}
	catch(Exception e)
	{
	       System.out.println(e);
	}
        }      
}