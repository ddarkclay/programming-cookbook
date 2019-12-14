import java.util.Scanner;
class String_Exception_6
{
	public static void main(String args[]) 
	{
		Scanner s = new Scanner(System.in);
		try
		{
			String str;
			System.out.print("Enter a String : ");
			str = s.next();
			if(str.equals("INDIA"))
				System.out.print("\n\nYour String is Correct");
			else
				throw new Exception();
		}
		catch(Exception e)
		{
			System.out.print("\n\nNo Match Exception : "+e);
		}
	}
}

