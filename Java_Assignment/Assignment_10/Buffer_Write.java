import java.io.*;
import java.util.Scanner;
public class Buffer_Write
{
	public static void main(String args[]) throws IOException
	{
		int i;
		FileWriter fout = new FileWriter("example1.txt",true);
		BufferedWriter bf = new BufferedWriter(fout);
		String str;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a String : ");
		str = s.nextLine();
		bf.write(str);
		System.out.print("File Write Successfully");
		bf.close();
	}
}
