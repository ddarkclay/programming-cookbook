import java.util.Scanner;
public class series_11 {
	
	public static void main (String[] args) {
		int i,n,sum=0;
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter Last Number : ");
		n = obj.nextInt();
		System.out.println();
		
		for(i=1; i<=n; i++)
		{
			sum = sum + (i*i);
		}
		System.out.print("Sum of 1+1^2+2^2+3^2+.....+n^2 : " +sum);
		sum=0;
		System.out.println();
		for(i=1; i<=n; i++)
		{
			sum = sum + (1/i);
		}
		System.out.print("Sum of 1+1/2+1/3+1/4+.....+1/n : " +sum);
	}
}

