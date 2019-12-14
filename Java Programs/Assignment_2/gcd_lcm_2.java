import java.util.Scanner;
public class gcd_lcm_2 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		int n1,n2,r=0, a, b;
		System.out.print("Enter First Number : ");
		n1 = obj.nextInt();
		System.out.print("Enter Second Number : ");
		n2 = obj.nextInt();
		
        a = (n1 > n2) ? n1 : n2;
        b = (n1 < n2) ? n1 : n2; 
        r = b;
        while(a % b != 0)
        {
            r = a % b;
            a = b;
            b = r;
        }
        System.out.println();
        System.out.println();
        System.out.println("The GCD of numbers " +n1+ " & " +n2+ " are: " +r);
        int x = (n1 > n2) ? n1 : n2; 
        while(true)
        {
            if(x % n1 == 0 && x % n2 == 0)
            {
                System.out.println("The LCM of numbers " +n1+ " & " +n2+ " are: " +x);
                break;
            }
            ++x;
        }	
	}
}
