import java.util.Scanner;
class Count_digit_Exception_5
{
	public static void main(String args[]) 
	{
		Scanner s = new Scanner(System.in);
		try
		{
			int no,digit=0;
			System.out.print("Enter a Number : ");
			no = s.nextInt();
			int num=no; 
			while(no != 0)
			{
				no = no/10;
				digit++;
			}
			System.out.print("\n\n"+num+" is "+digit+" digit Number .");
		}
		catch(Exception e)
		{
			System.out.print("\n\nNot a Number : "+e);
		}
	}
}

