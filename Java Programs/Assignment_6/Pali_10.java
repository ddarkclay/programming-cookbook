import palintest.Palindrome;
import java.util.Scanner;
class Pali_10
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		boolean check;
		Palindrome p = new Palindrome();
		System.out.print("Enter a String : ");
		String str = s.next();
		check = p.test(str);
		System.out.print("\n");
		if(check == true)
			System.out.print(str+" is Palindrome .");
		else
			System.out.print(str+" is Not Palindrome .");
	}
}
