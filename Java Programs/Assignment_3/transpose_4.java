import java.util.Scanner;
public class transpose_4 {
	
	public static void main (String[] args) {
		Scanner obj = new Scanner(System.in);
		int i,j;
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
		System.out.print("\nOriginal array is : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(arr[i][j]+" ");
			}
			System.out.print("\n");
		}
		System.out.print("\n\nTranspose array is : \n\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(arr[j][i]+" ");
			}
			System.out.print("\n");
		}
	}
}
