import java.util.Scanner;
public class perfect_8 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n,i,flag=0;
		n = s.nextInt();
		 for(i=1; i<n; i++)
		 {
			if(i*i == n)
			{
				flag = 1;
				break;
			}
		 }
        System.out.println();
        if(flag == 1)
			System.out.print(n+ " is Perfect Square of " +i);
		else
			System.out.print(n+ " is not Perfect Number ");
	}
}
