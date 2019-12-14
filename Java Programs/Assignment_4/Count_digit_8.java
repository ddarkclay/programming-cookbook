import java.util.Scanner;
class Count
{	
	int i,count=0;
	
	int calculation(int num)
	{
		while(num != 0)
		{
			num = num/10;
			count++;
		}
		return count;
	}
}

public class Count_digit_8
{
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int no,digit;
		Count c = new Count();
		System.out.print("Enter a Number : ");
		no = s.nextInt();
		digit = c.calculation(no);
		System.out.print("\n\n"+no+" is "+digit+" digit Number .");
	}
}

