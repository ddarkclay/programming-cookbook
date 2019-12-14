// Basic input and output operations.
import java.io.*;

class BIO
{
      public static void main(String args[])
      {
              byte b[] = new byte[10];
              	
	try
	{
	       System.out.println("Enter a line of text   ");
	       System.in.read(b,0,10);
	       System.out.println("\n The line typed was  \n ");
	       String str = new String(b);
	       System.out.print(str);
	}
	catch(Exception e)
	{
       	       System.out.println("Error occurred !   ");
	}
      }
}