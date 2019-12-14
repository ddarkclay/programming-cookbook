// Read characters from the console using BufferedReader
import java.io.*;

class BRReadLine
{
	public static void main(String args[]) throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str;

		System.out.println("Enter Lines of text ");
		System.out.println("Enter 'Stop'to quit.");

		//read characters
		do
		{
			str = br.readLine();
			System.out.println(str);
		}while(!str.equals("Stop"));
	}
}