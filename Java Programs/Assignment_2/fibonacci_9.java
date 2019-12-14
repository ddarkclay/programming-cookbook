import java.util.Scanner;
public class fibonacci_9 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a last Number of Fibonacci Series : ");
		int n,i,f1=1,f2=1,f3;
		n = s.nextInt();
		System.out.println();
		 System.out.print(f1 + " " + f2);
		 for(i=1; i<n-1; i++)
		 {
			f3=f1+f2;
			System.out.print(" " +f3);
			f1=f2;
			f2=f3;	
		 }
	}
}
