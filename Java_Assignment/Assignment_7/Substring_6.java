import java.util.Scanner;
public class Substring_6 {
	
	public static void main (String[] args) 
	{
		Scanner s = new Scanner(System.in);
		int a,b;
		System.out.print("Enter a String : ");
		String str = s.next();
		System.out.print("Enter Starting Number of Character: ");
		a = s.nextInt();
		System.out.print("Enter Ending Number of Character: ");
		b = s.nextInt();
		System.out.print("\n\nFinal Substring is : "+str.substring(a,b));
	}
}

