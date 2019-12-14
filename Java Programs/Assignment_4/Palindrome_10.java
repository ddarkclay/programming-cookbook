import java.util.Scanner;
class Palindrome
{	
	int temp , r , sum = 0;

	int calculation(int num)
	{
		temp = num;
		while (num > 0)
		{
			r = num % 10;
			sum = (sum * 10)+r;
			num = num / 10;
		}
		System.out.println();
		if (temp == sum)
			return 1;
		else
			return 0;
	}
}

public class Palindrome_10
{
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int no,check;
		Palindrome c = new Palindrome();
		System.out.print("Enter a Number : ");
		no = s.nextInt();
		check = c.calculation(no);
		if(check == 1)
			System.out.print("\n"+no+" is Palindrome");
		else
			System.out.print("\n"+no+" is not Palindrome");
	}
}

