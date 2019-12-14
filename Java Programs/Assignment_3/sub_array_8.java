import java.util.Scanner;
public class sub_array_8 {
	
	public static void main (String[] args) {
		Scanner obj = new Scanner(System.in);
		int i,j,sub=0;
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
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				sub=sub+(-arr[i][j]);
			}
		}
		System.out.print("\nSubtraction of Array is : "+sub);
	}
}
