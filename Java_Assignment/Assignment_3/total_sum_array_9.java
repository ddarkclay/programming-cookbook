import java.util.Scanner;
public class total_sum_array_9  {
	
	public static void main (String[] args) {
		Scanner obj = new Scanner(System.in);
		int i,j,rowsum=0,colsum=0,total=0;
		int arr[][] = new int[3][3];
		System.out.print("Enter 9 values for 3*3 Matrix : ");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				arr[i][j]=obj.nextInt();
			}
			System.out.print("\n");
		}
		System.out.print("Original array is : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.print("\n");
		}
		System.out.print("\n\nTotal Sum of array is : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				rowsum=rowsum+arr[i][j];
				System.out.print(arr[i][j]+"  ");
			}
			
			System.out.print(rowsum);
			rowsum=0;
			
			System.out.print("\n");
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				colsum=colsum+arr[j][i];
			}
			System.out.print(colsum+" ");
			total=total+colsum;
			colsum=0;
		}
		System.out.print(total);
	}
}
