import java.util.Scanner;
public class armstrong_7 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n,r,sum=0,temp;
		n = s.nextInt();
		temp = n;
		 while(n>0)
         {
             r=n%10;
             sum=sum+(r*r*r);
             n=n/10;
         }
        System.out.println();
        if(temp == sum)
			System.out.print(temp+ " is Armstrong Number");
		else
			System.out.print(temp+ " is not Armstrong Number");
	}
}
