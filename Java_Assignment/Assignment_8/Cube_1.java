import java.util.Scanner;
class Cube_1
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		try
		{
			System.out.print("Enter a number : ");
			int a = s.nextInt();
			System.out.print("\nCube of "+a+" is "+a*a*a);
		}
		catch(Exception e)
		{
			System.out.print("\nNot a Number "+e);
		}
		
	}
}
	
