import java.io.*;
// Write data inside the File....
class FODemo
{
   public static void main(String args[])
   {
      byte b[] = new byte[80];
              	
      try
      {
	System.out.println("Enter a line to be saved into a file:  ");
	       int bytes = System.in.read(b);

	       FileOutputStream fo = new FileOutputStream("ABC.txt");
	       
		fo.write(b,0,bytes);
	       System.out.println("Written...!!   ");    
	}
	catch(Exception e)
	{
       	       System.out.println("Error in creating File...   ");
	}
      }
}