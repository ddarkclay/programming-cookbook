import java.io.*;
import java.util.Scanner;
public class Appending_5 
{ 
	public static void main(String[] args) 
	{
		byte b;
        try
		{
			RandomAccessFile fr = new  RandomAccessFile("file1.txt","rw");
			FileWriter fw = new FileWriter("file2.txt",true);
			long size = fr.length();
			long fp = 0;
			while(fp<size)
			{
	          String s = fr.readLine();
	          fw.write(s);
	          fp = fr.getFilePointer();
			}
			System.out.println("File Write Successfully .");
			fw.close();
		}
		catch(IOException e)
		{
       	       System.out.println("File does not exist .");
		}
	}
}
