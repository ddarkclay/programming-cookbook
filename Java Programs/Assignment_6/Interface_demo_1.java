import java.util.Scanner;
interface I1
{
	public void getData();
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

class C2 extends C1
{
	void square_cube()
	{
		System.out.print("\n\nSquare of "+num+" is : "+num*num);
		System.out.print("\nCube of "+num+" is : "+num*num*num);
	}
}

class Interface_demo_1
{
	public static void main(String args[])
	{
		C2 o = new C2();
		o.getData();
		o.square_cube();
	}
}
