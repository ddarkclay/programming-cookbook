import packdemo.Prime;
import java.util.Scanner;
class Prime_12
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		boolean check;
		Prime p = new Prime();
		System.out.print("Enter a Number : ");
		int num = s.nextInt();
		check = p.primecal(num);
		System.out.print("\n");
		if(check == true)
			System.out.print(num+" is Not Prime Number .");
		else
			System.out.print(num+" is Prime Number .");
	}
}
