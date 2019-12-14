import java.util.Scanner;
public class large_1 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First number : ");
		int a = s.nextInt();
		System.out.print("Enter Second number : ");
		int b = s.nextInt();
		System.out.println();
		if(a > b)
			System.out.println(a + " is Greater Than " +b);
	}
}

