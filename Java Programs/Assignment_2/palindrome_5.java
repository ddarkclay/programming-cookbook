import java.util.Scanner;
public class palindrome_5 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n,r,sum=0,temp;
		n = s.nextInt();
		temp = n;
		 while(n > 0)
        {
            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }
        System.out.println();
        if(temp == sum)
			System.out.print(temp+ " is Palindrome");
		else
			System.out.print(temp+ " is not Palindrome");
	}
}
