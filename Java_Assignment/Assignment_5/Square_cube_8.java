import java.util.Scanner;
class Accept
{
	int no;
	Scanner s = new Scanner(System.in);
	Accept()
	{
		System.out.print("Enter a number : ");
		no = s.nextInt();
	}
}

class Cube extends Accept
{
	void Calculate()
	{
		System.out.print("\nSquare of "+no+" is : "+no*no);
	}
}

class Square extends Accept
{
	void Calculate()
	{
		System.out.print("\nCube of "+no+" is : "+no*no*no);
	}
}

class Square_cube_8
{
	public static void main(String args[])
	{
		Cube c = new Cube();
		Square s = new Square();
		c.Calculate();
		s.Calculate();
	}
}
