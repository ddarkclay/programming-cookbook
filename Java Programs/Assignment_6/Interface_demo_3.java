import java.util.Scanner;
interface I1
{
	public void accept();
}

interface I2 extends I1
{
	public void print();
}

class C1 implements I2
{
	String str;
	public void accept()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a String : ");
		str = s.next();
	}
	public void print()
	{
		System.out.print("\n\nEntered String is : "+str);
	}
}

class Interface_demo_3
{
	public static void main(String args[])
	{
		C1 o = new C1();
		o.accept();
		o.print();
	}
}
