import java.io.*;
import java.util.Scanner;
public class Buffer_Read
{
	public static void main(String args[]) throws IOException
	{
		int ch;
		FileReader fin = new FileReader("example1.txt");
		BufferedReader bf = new BufferedReader(fin);
		while((ch=bf.read())!=-1)
		{
			System.out.print((char)ch);
		}
		bf.close();
	}
}
