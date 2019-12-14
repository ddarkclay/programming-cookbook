import java.util.Scanner;
class Circle
{	
	Double area(int r)
	{
		return 3.14*r*r;
	}
	
	Double peri(int r)
	{
		return 2 * 3.14 * r;
	}
	
}

public class Circle_7
{
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int radius;
		Double area,perimeter;
		Circle c = new Circle();
		System.out.print("Enter Radius of Circle : ");
		radius = s.nextInt();
		area = c.area(radius);
		System.out.print("\n\nArea of Circle is : "+area);
		perimeter = c.peri(radius);
		System.out.print("\n\nPerimeter of Circle is : "+perimeter);
	}
}

