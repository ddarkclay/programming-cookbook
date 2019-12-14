import java.io.*;
import java.util.Scanner;
public class File_Write
{
	public static void main(String args[]) throws IOException
	{
		int i;
		FileOutputStream fout = new FileOutputStream("./example1.txt",true);
		String str;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a String : ");
		str = s.nextLine();
		char ch[] = str.toCharArray();
		for(i=0;i<str.length();i++)
			fout.write(ch[i]);
		System.out.print("File Write Successfully");
		fout.close();
	}
}
