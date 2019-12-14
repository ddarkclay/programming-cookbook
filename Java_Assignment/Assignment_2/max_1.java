import java.util.Scanner;
public class max_1 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		int n1,max,i;
		System.out.print("Enter a Number : ");
		n1 = obj.nextInt();
		max=n1;
		for(i=0;i<14;i++)
		{
			System.out.print("Enter a Number : ");
			n1 = obj.nextInt();
			if(max < n1)
			{
				max=n1;
			}
		}
			System.out.println();
			System.out.print("Maximum Number is : "+max);
	}
}
