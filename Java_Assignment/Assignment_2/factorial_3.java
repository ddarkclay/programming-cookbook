import java.util.Scanner;
public class factorial_3 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int num = s.nextInt();
		int fact = 1 , i;
		for (i = 1 ; i<=num ; i++)
		{
			fact = fact * i;
		}
		System.out.print("Factorial of " +num+ " is : " +fact);
	}
}

