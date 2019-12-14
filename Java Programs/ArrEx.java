import java.util.Scanner;
class ArrEx
{
	public static void main(String args[])
	{
		int arr1[][]= new int[3][3];
		int i,j;
		Scanner obj=new Scanner(System.in);
		
		for(i=0; i<4; i++)
		{
			for(j=0; j<4; j++)
				{
					arr1[i][j]=obj.nextInt();
				}
				System.out.println("\n");
		}
		
				for(i=0; i<4; i++)
				{
					for(j=0; j<4; j++)
						{
							System.out.println(arr1[i][j]);
							
						}
					System.out.println("\n");
				}
	}
}

