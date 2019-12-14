import myPack.*;
import java.util.Scanner;
public class demopack
{
	public static void main(String args[])
	{
		int a,b;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First Number : ");
		a = s.nextInt();
		System.out.print("Enter Second Number : ");
		b = s.nextInt();
		multi m = new multi(a,b);
		System.out.print("\nMultiplication is : "+m.calmul());
	}
	
}
