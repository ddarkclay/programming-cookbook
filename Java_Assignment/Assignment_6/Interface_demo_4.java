import java.util.Scanner;
interface I1
{
	public void getFirst();
}

interface I2 extends I1
{
	public void getSecond();
}

interface I3 extends I2
{
	public void calculate();
}

class C1 implements I3
{
	int n1,n2;
	public void getFirst()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First Number : ");
		n1 = s.nextInt();
	}
	
	public void getSecond()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Second Number : ");
		n2 = s.nextInt();
	}
	
	public void calculate()
	{
		System.out.print("\nAddition of "+n1+" And "+n2+" is : "+(n1+n2));
		System.out.print("\nSubtraction of "+n1+" And "+n2+" is : "+(n1-n2));
		System.out.print("\nMultiplication of "+n1+" And "+n2+" is : "+(n1*n2));
		System.out.print("\nDivision of "+n1+" And "+n2+" is : "+(n1/n2));
		System.out.print("\nModulus of "+n1+" And "+n2+" is : "+(n1%n2));
	}
}

class Interface_demo_4
{
	public static void main(String args[])
	{
		C1 o = new C1();
		o.getFirst();
		o.getSecond();
		System.out.print("\n\nResult is : ");
		o.calculate();
	}
}
