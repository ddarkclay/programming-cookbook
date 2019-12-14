import java.util.Scanner;
class accept_year
{
	int year;
	Scanner s = new Scanner(System.in);
	accept_year()
	{
		System.out.print("Enter a Year : ");
		year = s.nextInt();
	}
}

class check_leap extends accept_year
{
	void check()
	{
		if(year%100==0 && year%400 == 0 || year % 100 != 0 && year % 4 ==0)
			System.out.print(year+" is Leap Year .");
		else
		{
			System.out.print(year+" is not Leap Year .");
		}
	}
}

class Leap_6
{
	public static void main(String args[])
	{
		check_leap c = new check_leap();
		System.out.print("\n");
		c.check();
	}
}
