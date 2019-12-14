import java.io.*;

class RAFDemo
{
      public static void main(String args[])
      {
              byte b;
              	
	try
	{
	     RandomAccessFile f1 = new  RandomAccessFile("AC.txt","r");
	       long size = f1.length();
	       long fp = 0;

	       while(fp<size)
	       {
	          String s = f1.readLine();
	          System.out.println(s);
	          fp = f1.getFilePointer();
	       }
	}
	catch(IOException e)
	{
       	       System.out.println(" File does not exist...!!   ");
	}
      }
}
