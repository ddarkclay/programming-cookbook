import java.util.Scanner;
class Sum_digit
{	
	int i,sum=0,multi=1,r;
	
	int addition(int num)
	{
		while(num != 0)
		{
			r = num % 10;
			sum =sum + r;
			num = num/10;
		}
		return sum;
	}
	
	int multiplication(int num)
	{
		while(num != 0)
		{
			r = num % 10;
			multi = multi * r;
			num = num/10;
		}
		return multi;
	}
}

public class Sum_digit_9
{
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int no,add,mul;
		Sum_digit c = new Sum_digit();
		System.out.print("Enter a Number : ");
		no = s.nextInt();
		add = c.addition(no);
		System.out.print("\n\nAddition of "+no+" digit Number is : "+add);
		mul = c.multiplication(no);
		System.out.print("\n\nMultiplication of "+no+" digit Number is : "+mul);
	}
}

