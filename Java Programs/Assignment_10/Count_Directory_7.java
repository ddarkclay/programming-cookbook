import java.io.*;
import java.util.Scanner;
public class Count_Directory_7
{ 
	public static void main(String[] args) 
	{
		try 
		{
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter Source File Name : ");
			String file = sc.nextLine();
			File f = new File(file);
			File[] list = f.listFiles();
			int count_file=0,count_dir=0;
			if(f.exists() == true)
			{
				for (int i=0; i<list.length; i++) 
				{
				  if (list[i].isFile()) 
				  {
					count_file++;
				  } 
				  else if (list[i].isDirectory()) 
				  {
					count_dir++;
				  }
				}
				System.out.println("\nTotal Number of Files are : "+count_file);
				System.out.println("Total Number of Subdirectories are : "+count_dir);
			}
			else
			{
				System.out.print("Enter File or Directory is not Exist");
			}
		}
		catch (Exception e) 
		{
			System.out.print("\n\nException Occur");
		}
	}
}
