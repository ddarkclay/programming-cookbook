import java.util.Scanner;
class String_2
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		try
		{
			String str = "abc";
			System.out.print("Length of string is : "+str.length());
		}
		catch(NullPointerException e)
		{
			System.out.print("Please Enter any String "+e);
		}
		
	}
}
	
