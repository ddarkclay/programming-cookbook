import java.util.Scanner;
public class student_result_10 {
	
	public static void main (String[] args) {
		int i,roll,total=0;
		int marks[] = new int[4];
		String n;
		double percent;
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter Name of Student : ");
		n = obj.nextLine();
		System.out.print("Enter Roll Number : ");
		roll=obj.nextInt();
		for(i=0;i<4;i++)
		{
			System.out.print("Enter "+i+" Subject Marks : ");
			marks[i]=obj.nextInt();
		}
		
		System.out.println("Student Roll Number is : "+roll);
		System.out.println("Student Name is : " + n);
		
		for(i=0;i<4;i++)
		{
			total=total+marks[i];
		
		}
		System.out.println("Student Total Marks are : "+total);
		percent = total/4;
		System.out.println("Student Percentages is : "+percent);
	}
}
