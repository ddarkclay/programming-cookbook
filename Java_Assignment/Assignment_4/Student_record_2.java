import java.util.Scanner;
class Student
{	
	int i,roll;
	int marks[] = new int[4];
	String name;
	
	void getData()
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Name of Student : ");
		name = s.nextLine();
		System.out.print("Enter Roll Number of Student : ");
		roll=s.nextInt();
		for(i=0;i<4;i++)
		{
			System.out.print("Enter Subject Marks : ");
			marks[i]=s.nextInt();
		}
		System.out.print("\n\n");
	}
	
	void showData()
	{
		System.out.println("\nStudent Roll Number is : "+roll);
		System.out.println("\nStudent Name is : " + name);
		for(i=0;i<4;i++)
			System.out.print("\nSubject Marks is : "+marks[i]);
		System.out.print("\n\n");
	}
}

public class Student_record_2 {
	public static void main(String args[]) {
		Student obj[] = new Student[3];
		int i;
		for(i=0;i<3;i++)
		{
			obj[i] = new Student();
			System.out.print("Enter Record of Student : \n\n");
			obj[i].getData();
		}
		System.out.print("\n\n\nStudent Record is : \n\n");
		for(i=0;i<3;i++)	
		{
			System.out.print("\n\nRecord of Student : ");
			obj[i].showData();
		}
	}
}

