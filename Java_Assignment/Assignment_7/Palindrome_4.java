import java.util.Scanner;
public class Palindrome_4 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a String : ");
		String str = s.next();
		String temp,rev="";
		temp = str;
		for(int i = str.length()-1;i>=0;i--)
		{
				rev = rev +str.charAt(i);
		}
		if (temp.equals(rev))
			System.out.print("\nEntered String " +temp+ " is Palindrome");
		else
			System.out.print("\nEntered number " +temp+ " is Not Palindrome");
	}
}

