import java.util.Scanner;
class Employee 
{
	Scanner s = new Scanner(System.in);
	int emp_no;
	String emp_name;
	double basic_sal,gross_sal,net_sal,pf,da,hra;
	
	void getData()
	{
		System.out.print("Enter Employee Name : ");
		emp_name = s.nextLine();
		System.out.print("Enter Employee No. : ");
		emp_no = s.nextInt();
		System.out.print("Enter Employee Basic Salary : ");
		basic_sal = s.nextDouble();
	}
	
	void calculate()
	{
		da = (25*basic_sal)/100;
		hra = (25*basic_sal)/100;
		gross_sal = basic_sal + da + hra;
		pf = (10*gross_sal)/100;
		net_sal = gross_sal - pf;
	}
	
	void showData()
	{
		System.out.print("\n\nEmployee No. is : "+emp_no);
		System.out.print("\nEmployee Name is : "+emp_name);
		System.out.print("\nEmployee Basic Salary is : "+basic_sal);
		System.out.print("\nEmployee Gross Salary is : "+gross_sal);
		System.out.print("\nEmployee Net Salary is : "+net_sal);
	}
}

public class Emp_sal_1 {
	public static void main(String args[]) {
		Employee e = new Employee();
		e.getData();
		e.calculate();
		e.showData();
	}
}
