import java.util.Scanner;
class ByteSizeException extends RuntimeException
{
	ByteSizeException(String s)
	{
		super(s);
	}
}

class Byte_3
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		try
		{
				byte num;
				System.out.print("Enter your Number : ");
				num = s.nextByte();
				check(num);
				
		}
		catch(Exception e)
		{
			System.out.print("\nException Occur "+e);
		}
		
	}
	public static void check(byte a) throws ByteSizeException
		{
			if(a>=-128 && a<=127)
				System.out.print("\nEntered Number is : "+a);
		}
}
	
