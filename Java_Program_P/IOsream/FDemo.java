// Read data from File.
import java.io.*;

class FDemo
{
      public static void main(String args[]) throws Exception
      {
	int size;
	InputStream f = new FileInputStream(args[0]);
	System.out.println("Bytes available to read :"+(size = f.available()));
	char str[] = new char[200];
	for(int i=0;i<size;i++)
	{
	       str[i] = ((char)f.read());
	       System.out.print(str[i]);
	}
	 System.out.println("");
	 f.close();
      }
}