import java.io.*;
import java.util.Scanner;
public class File_Directory_6 
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
			if(f.isDirectory() == true)
			{
				for (int i=0; i<list.length; i++) 
				{
				  if (list[i].isFile()) 
				  {
					System.out.println("File :"+list[i].getName());
				  } 
				  else if (list[i].isDirectory()) 
				  {
					System.out.println("Directory :"+list[i].getName());
				  }
				}
			}
			else if(f.exists() == true)
			{
				System.out.print("This File is Exist ");
					System.out.print("\nFile Name is "+f.getName());
					System.out.print("\nFile Absolute Path is "+f.getAbsolutePath());
					System.out.print("\nFile Parent Directory is "+f.getParent());
					System.out.print("\nCan file Read "+f.canRead());
					System.out.print("\nCan file Read "+f.canWrite());
					System.out.print("\nFile Size is :"+f.length());
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
