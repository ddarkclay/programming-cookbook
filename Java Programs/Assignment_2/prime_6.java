import java.util.Scanner;
public class prime_6 
{	
	public static void main (String[] args) 
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int n,flag=0;
		n = s.nextInt();
		for(int i=2; i<n; i++)
		{
			if(n % i == 1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			System.out.print(n+ " is Prime");
		else
			System.out.print(n+ " is not Prime");		
	}
}


