import java.io.*;
import java.util.Scanner;
public class FileCopyExample_1 
{ 
	public static void main(String[] args) 
	{
		try 
		{
			Scanner sc = new Scanner(System.in);
			System.out.print("Enter Source File Name : ");
			String source = sc.nextLine();
			System.out.print("Enter Target File Name : ");
			String target = sc.nextLine();
			FileReader fr = new FileReader(source);
			BufferedReader br = new BufferedReader(fr);
			FileWriter fw = new FileWriter(target,true);
			String s;
 
			while ((s = br.readLine()) != null) 
			{
				fw.write(s); 
			}
			br.close();
			fw.close();
                        System.out.println("File Copied Successfully");
		} 
		catch (IOException e) 
		{}
	}
}
