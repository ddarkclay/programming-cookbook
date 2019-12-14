import java.util.Scanner;
interface I1
{
	public void getData();
}

interface I2
{
	public void showData();
}

class C1 implements I1 
{
	int num;
	public void getData()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		num = s.nextInt();
	}
}

class C2 extends C1 implements I2 
{
	public void showData()
	{
		System.out.print("\n\nEntered Number is  "+num);
	}
}

class C3 extends C2
{
	int fact=1;
	void factorial()
	{
		for(int i=1;i<=num;i++)
		{
			fact = fact * i;
		}
		System.out.print("\nFactorial of "+num+" is : "+fact);
	}
}

class Interface_factorial_5
{
	public static void main(String args[])
	{
		C3 o = new C3();
		o.getData();
		o.showData();
		o.factorial();
	}
}
