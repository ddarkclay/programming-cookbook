import java.util.Scanner;
interface I1
{
	public void getData();
}

interface I2 extends I1
{
	public void getMarks();
}

interface I3 extends I2
{
	public void calculate();
}

class C1 implements I3
{
	String name;
	int roll,m1,m2,m3;
	public void getData()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("\nEnter a Name : ");
		name = s.next();
		System.out.print("Enter a Roll Number : ");
		roll = s.nextInt();
	}
	
	public void getMarks()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Marks for First Subject : ");
		m1 = s.nextInt();
		System.out.print("Enter a Marks for Second Subject : ");
		m2 = s.nextInt();
		System.out.print("Enter a Marks for Third Subject : ");
		m3 = s.nextInt();
	}
	
	public void calculate()
	{
		System.out.print("\nName of Student is : "+name);
		System.out.print("\nRoll Number of Student is : "+roll);
		System.out.print("\nTotal Marks of Three Subject is : "+(m1+m2+m3));
		System.out.print("\nPercentage of Student is : "+(m1+m2+m3)/3);
	}
}

class Interface_demo_4
{
	public static void main(String args[])
	{
		C1 o = new C1();
		System.out.print("Enter Student Information : ");
		o.getData();
		o.getMarks();
		System.out.print("\n\nStudent Information is : ");
		o.calculate();
	}
}
