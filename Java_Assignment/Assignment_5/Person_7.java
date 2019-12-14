import java.util.Scanner;
class Person
{
	String profession;
	int age;
	Scanner s = new Scanner(System.in);
	void getData()
	{
		System.out.print("Enter Person's Profession : ");
		profession = s.nextLine();
		System.out.print("Enter Person's Age : ");
		age = s.nextInt();
	}
}

class Math_Teacher extends Person
{
	String hobby;
	Math_Teacher()
	{
		getData();
		Scanner s = new Scanner(System.in);
		s.nextLine();
		System.out.print("Enter Teachers Hobby : ");
		hobby = s.nextLine();
	}
	void showData()
	{
		System.out.print("\nPerson's Profession is : "+profession);
		System.out.print("\nTeather's Age is : "+age);
		System.out.print("\nTeather's Hobby is : "+hobby);
	}
}

class Footboallpayer extends Person
{
	String hobby;
	Footboallpayer()
	{
		getData();
		Scanner s = new Scanner(System.in);
		s.nextLine();
		System.out.print("Enter Player Hobby : ");
		hobby = s.nextLine();
		
	}
	void showData()
	{
		System.out.print("\n\nPerson's Profession is : "+profession);
		System.out.print("\nPlayer's Age is : "+age);
		System.out.print("\nPlayer's Hobby is : "+hobby);
	}
}

class Person_7
{
	public static void main(String args[])
	{
		System.out.print("Enter Teacher's Information\n");
		Math_Teacher m = new Math_Teacher();
		System.out.print("\n\nEnter Player's Information\n");
		Footboallpayer f = new Footboallpayer();
		System.out.print("\n\nInformation of Teacher And Player : \n");
		m.showData();
		f.showData();
	}
}
