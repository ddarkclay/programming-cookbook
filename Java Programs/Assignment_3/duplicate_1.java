import java.util.Scanner;
public class duplicate_1 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		int arr[]=new int[10];
		int temp[]=new int[10];
		int i,j,count=0;
		System.out.print("Enter Ten Number : ");
		for(i=0;i<10;i++)
		{
			arr[i]=obj.nextInt();
		}
		
		for(i=0;i<10;i++)
		{
			for(j=0;j<count;j++)
			{
				if(arr[i]==arr[j])
					break;
			}
			if(j==count)
			{
				temp[count]=arr[i];
				count++;
			}
		}
		System.out.print("\n\nWithout Duplicate Numbers are : ");
		for (i=0; i<count; i++) 
				System.out.print(temp[i]+" "); 
	}
}
