import java.util.Scanner;
public class large_2 {
	
	public static void main (String[] args) {
		Scanner obj = new Scanner(System.in);
		int i=0,j,n1,n2,large=0,small=0,table=1;
		System.out.print("Enter First Number : ");
		n1 = obj.nextInt();
		System.out.print("Enter Second Number : ");
		n2 = obj.nextInt();
		System.out.println();
		if(n1>n2)
		{
			System.out.print(n1+" is Larger than "+n2);
			large=n1;
			small=n2;
		}
		else
		{
			System.out.print(n2+" is Larger than "+n1);
			large=n2;
			small=n1;
		}	
		System.out.println();
		System.out.println();
		System.out.println("Table Between "+small+" to "+large+" is : ");
		System.out.println();
		for(j=1;j<=10;j++)
		{
			for(i=small;i<=large;i++)
			{
				table=i * j;
				System.out.print("  "+table);
			}
			System.out.print("\n");
		}
	}
}
