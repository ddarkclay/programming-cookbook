import java.util.Scanner;
class Matrix
{	
	Scanner s = new Scanner(System.in);
	int a[][] = new int[3][3];
	int sum[][] = new int[3][3];
	int mul[][] = new int[3][3];
	int i,j;
	
	Matrix()
	{
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				a[i][j] = s.nextInt();
		}	
	}
	
	void add(Matrix m)
	{
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				sum[i][j] = a[i][j]+m.a[i][j];
		}
	}
	
	void mul(Matrix m)
	{
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				mul[i][j] = a[i][j]*m.a[i][j];
		}
	}
	
	void display()
	{
		System.out.print("\n\nAddition of First And Second Array : \n\n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				System.out.print(sum[i][j]+" ");
			System.out.print("\n");
		}
		System.out.print("\n\nMultiplication of First And Second Array : \n\n");
		for(i=0; i<3; i++)
		{
			for(j=0; j<3; j++)
				System.out.print(mul[i][j]+" ");
			System.out.print("\n");
		}
	}
}

public class Matrix_6 {
	public static void main(String args[]) {
		System.out.print("Enter First Array 9 value : ");
		Matrix M1 = new Matrix();
		System.out.print("Enter Second Array 9 value : ");
		Matrix M2 = new Matrix();
		M1.add(M2);
		M1.mul(M2);
		M1.display();
	}		
}
