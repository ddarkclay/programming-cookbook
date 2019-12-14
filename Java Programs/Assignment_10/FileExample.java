import java.io.*;
public class FileExample
{
	public static void main(String args[])
	{
		try
		{
			File f1 = new File("./example.txt");
			if(f1.exists() == true)
			{
				System.out.print("Is Exist "+f1.exists());
				System.out.print("\nFile Size is :"+f1.length());
			}
			else
			{
				System.out.print("File Does not Exist !");
				f1.createNewFile();
				System.out.print("Is Exist "+f1.exists());
				System.out.print("\nFile Size is :"+f1.length());
				System.out.print("\nCan file Read "+f1.canWrite());
				System.out.print("\nFile Name is "+f1.getName());
				//System.out.print("\nFile is Deleted "+f1.delete());
			}
			
		}
		catch(Exception e)
		{}
	}
}
