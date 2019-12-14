import java.util.Scanner;
public class sort_3 {
	
	public static void main (String[] args) {
		Scanner obj = new Scanner(System.in);
		int i=0,j,temp;
		int num[] = new int[10];
		System.out.print("Enter 10 Number : \n");
		System.out.println();
		for(i=0;i<10;i++)
		{
			System.out.print("Enter Number : ");
			num[i]=obj.nextInt();
		}
		for(i=0;i<10;i++)
		{
			for(j=i+1;j<10;j++)
			{
				if(num[i] > num[j])
				{
					temp=num[i];
					num[i]=num[j];
					num[j]=temp;
				}
			}
		}
		System.out.print("\n\nSorted Asecding Numbers are : ");
		for(i=0;i<10;i++)
		{
			System.out.print(num[i]+" ");
		}
		System.out.print("\n\nSorted Descending Numbers are : ");
		for(i=9;i>=0;i--)
		{
			System.out.print(num[i]+" ");
		}
	}
}
