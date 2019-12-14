import java.util.Scanner;
class Publication
{	
	String title;
	double price;
	Scanner s = new Scanner(System.in);
	void getData()
	{
		System.out.print("Enter Title : ");
		title = s.nextLine();
		System.out.print("Enter price : ");
		price = s.nextDouble();
	}
}

class books extends Publication
{
	int pages;
	books()
	{
		getData();
		System.out.print("Enter Total Number of Pages : ");
		pages = s.nextInt();
	}
	
	void putData()
	{
		System.out.print("Title is : "+title);
		System.out.print("\nPrice is : "+price);
		System.out.print("\nTotal Number of Pages are : "+pages);
	}
}

class Cassetts extends Publication
{
	double time;
	Cassetts()
	{
		getData();
		System.out.print("Enter Total Time of Cassett : ");
		time = s.nextDouble();
	}
	
	void putData()
	{
		System.out.print("Title is : "+title);
		System.out.print("\nPrice is : "+price);
		System.out.print("\nTotal Time of Cassett is : "+time);
	}
}

class Publication_2
{
	public static void main(String args[])
	{
		System.out.print("Enter Information of Book : \n");
		books b = new books();
		System.out.print("\n\nEnter Information of Casset : \n");
		Cassetts c = new Cassetts();
		System.out.print("\n\nInformation of Book is : \n");
		b.putData();
		System.out.print("\n\nInformation of Casset is : \n");
		c.putData();
	}
}
