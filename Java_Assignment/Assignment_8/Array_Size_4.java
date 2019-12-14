import java.util.Scanner;
class Array_Size_4
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		try
		{
			int arr[] = {1,2,3,4,5,6};
			int i;
			if(arr.length == 5)
			{
				System.out.print("Entered numbers are : ");
				for(i=0;i<5;i++)
				{
					System.out.print(arr[i]+" ");
				}
			}
			else
				throw new Exception();
		}
		catch(Exception e)
		{
			System.out.print("\nOut Of Range ! "+e);
		}
		
	}
}
	
