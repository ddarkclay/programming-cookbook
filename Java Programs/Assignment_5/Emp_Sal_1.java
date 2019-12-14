import java.util.Scanner;
class Employee
{	
	int emp_no,basic_sal;
	String name;		
	Scanner s = new Scanner(System.in);
	void getData()
	{
		System.out.print("\nEnter name : ");
		name = s.next();
		System.out.print("Enter no : ");
		emp_no = s.nextInt();
		System.out.print("Enter Basic Salary : ");
		basic_sal = s.nextInt();
	}
	
	void showData()
	{
		System.out.print("\nName is : "+name);
		System.out.print("\nNumber is : "+emp_no);
		System.out.print("\nBasic Salary is : "+basic_sal);
	}		
}

class Officer extends Employee
{
	double ta;
	void total()
	{
		ta = basic_sal * 10 / 100;
		ta = ta + basic_sal;
		System.out.print("Total Salary is : "+ta);
	}
}

class Manager extends Officer
{
	double ch_edu=5000,last;
	void total_man()
	{
		last = basic_sal+ch_edu;
		System.out.print("Total Salary is : "+last);
	}
	
}

public class Emp_Sal_1 {
	public static void main(String args[]) {
		Manager m = new Manager();
		System.out.print("Enter Employee Infrormation : ");
		m.getData();
		System.out.print("\nEnter Officer Infrormation : ");
		m.getData();
		System.out.print("\nEnter Manager Infrormation : ");
		m.getData();
		System.out.print("\n\n\nInfrormation of Employee : ");
		m.showData();
		System.out.print("\n\nInfrormation of Officer : ");
		m.total();
		System.out.print("\n\nInfrormation of Manager : ");
		m.showData();
		m.total_man();
	}		
}
