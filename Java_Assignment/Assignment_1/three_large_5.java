import java.util.Scanner;
public class three_large_5 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First number : ");
		int a = s.nextInt();
		System.out.print("Enter Second number : ");
		int b = s.nextInt();
		System.out.print("Enter Third number : ");
		int c = s.nextInt();
		System.out.println();
		if(a > b && a > c)
			System.out.println(a + " is Maximum Than " + b + " And " + c);
		else if(b > a && b > c)
			System.out.println(b + " is Maximum Than " + a + " And " + c);
		else
			System.out.println(c + " is Maximum Than " + b + " And " + a);
	}
}

