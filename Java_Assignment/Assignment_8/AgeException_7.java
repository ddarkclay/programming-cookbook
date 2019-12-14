import java.util.Scanner;
class AgeException_7
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		try
		{
			int age;
			System.out.print("Enter age : ");
			age = s.nextInt();
			if(age>60)
				throw new Exception();
			System.out.print("\n\nAge is Valid");
		}
		catch(Exception e)
		{
			System.out.print("\n\nException occur : Age should be less than 60 Age is  : "+e);
		}
	}
}
