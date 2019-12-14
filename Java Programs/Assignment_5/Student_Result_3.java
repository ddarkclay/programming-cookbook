import java.util.Scanner;
class Marks
{
	int roll=1;
	public int marks;
	String name;
	double aver;
	Scanner s = new Scanner(System.in);
	void getData()
	{
		System.out.print("\nEnter Student Name : ");
		name = s.next();
		System.out.print("Enter Student No : ");
		roll = s.nextInt();
	}
	Marks(int m)
	{
		marks = m;
	}
	
	void avg(Physics p , Chemistry c , Mathematics m)
	{
		aver = (p.marks+c.marks+m.marks)/3;
	}
	
	void showData()
	{
		System.out.print("\nStudent Name is : "+name);
		System.out.print("\nStudent roll No is : "+roll);
		System.out.print("\nStudent Average is : "+aver);
	}
	
}

class Physics extends Marks
{
	int mark;
	Physics(int mark)
	{
		super(mark);
	}
}

class Chemistry extends Marks
{
	int mark;
	Chemistry(int mark)
	{
		super(mark);
	}
}

class Mathematics extends Marks
{
	int mark;
	Mathematics(int mark)
	{
		super(mark);
	}
}

class Student_Result_3
{
	public static void main(String args[])
	{
		int m1,m2,m3,i,n;
		Scanner s = new Scanner(System.in);
		System.out.print("Enter How many Student : ");
		n = s.nextInt();
		Marks m[] = new Marks[n];
		Mark u[] = new mark[n];
		for(i=0;i<n;i++)
		{
			//Marks m[i] = new Marks(100);
			System.out.print("\n\nEnter "+i+" Student Information : ");
			m[i].getData();
			System.out.print("Enter Marks for Physics Subject : ");
			m1 = s.nextInt();
			System.out.print("Enter Marks for Chemistry Subject : ");
			m2 = s.nextInt();
			System.out.print("Enter Marks for Mathematics Subject : ");
			m3 = s.nextInt();
			Physics phy = new Physics(m1);
			Chemistry chem = new Chemistry(m2);
			Mathematics math = new Mathematics(m3);
			m[i].avg(phy,chem,math);
			System.out.print("\n\nInformation of  "+i+" Student : ");
		} 
		for(i=0;i<n;i++)
		{
			m[i].showData();
		}
	}
}
