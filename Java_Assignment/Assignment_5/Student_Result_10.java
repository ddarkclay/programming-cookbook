import java.util.Scanner;
class Marks
{
	int roll=1;
	public int marks;
	String name;
	Scanner s = new Scanner(System.in);
	Marks(int m)
	{
		marks = m;
		System.out.print("Enter Student Name : ");
		name = s.next();
		System.out.print("Enter Student No : ");
		roll = s.nextInt();
	}
	
}

class Physics extends Marks
{
	int mark;
	Scanner s = new Scanner(System.in);
	void getMarks()
	{
		System.out.print("Enter Physics Marks : ");
		mark = s.nextInt();
	}
	Physics()
	{
		super(70);
		System.out.print("\nStudent Name is : "+name);
		System.out.print("\nStudent roll No is : "+roll);
		System.out.print("\nStudent Mark is : "+marks);
	}
	
	void avg(Chemistry c , Mathematics m)
	{
		double average = mark + c.mark + m.mark;
		System.out.print("\n\nAverage is : "+average);
	}
}

class Chemistry extends Marks
{
	int mark;
	Scanner s = new Scanner(System.in);
	void getMarks()
	{
		System.out.print("Enter Chemistry Marks : ");
		mark = s.nextInt();
	}
	Chemistry()
	{
		super(78);
		System.out.print("\nStudent Name is : "+name);
		System.out.print("\nStudent roll No is : "+roll);
		System.out.print("\nStudent Mark is : "+marks);
		
	}
}

class Mathematics extends Marks
{
	int mark;
	Scanner s = new Scanner(System.in);
	void getMarks()
	{
		System.out.print("Enter Mathematics Marks : ");
		mark = s.nextInt();
	}
	Mathematics()
	{
		super(80);
		System.out.print("\nStudent Name is : "+name);
		System.out.print("\nStudent roll No is : "+roll);
		System.out.print("\nStudent Mark is : "+marks);
		
	}
}

class Student_Result_10
{
	public static void main(String args[])
	{
		double avg;
		Physics p = new Physics();
		//p.getMarks();
		Chemistry c = new Chemistry();
		//c.getMarks();
		Mathematics m = new Mathematics();
		//m.getMarks();
		avg = p.marks + c.marks + m.marks;
		System.out.print("Average is : "+avg);
	}
}
