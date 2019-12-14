import java.io.*;
import java.util.Scanner;
public class Count_Vowels_2
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter File Name : ");
		String fname = s.next();
		int count=0;
		char str[] = new char[200];
		try
		{
			File f1 = new File(fname);
			InputStream fin = new FileInputStream(fname);
			if(f1.exists()== true)
			{
				int size = fin.available();
				for(int i=0; i<size;i++)
				{
					str[i] = ((char)fin.read());
					if(str[i]=='A'||str[i]=='a'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
						count++;
				}
				System.out.print("Total Number of Vowels are : "+count);
			}
			fin.close();
		}
		catch(IOException e)
		{
			System.out.print("File Does not Exist !");
		}
		
	}
}
