import java.util.Scanner;
class Shape
{	
	double side1,side2;
	Scanner s = new Scanner(System.in);
	Shape(double a, double b)
	{
		side1 = a;
		side2 = b;
	}
}

class Rectangle extends Shape
{
	Rectangle(double a, double b)
	{
		super(a,b);
	}
	double area()
	{
		return side1*side2;
	}
}

class Triangle extends Shape
{
	Triangle(double a, double b)
	{
		super(a,b);
	}
	double area()
	{
		return side1*side2/2;
	}
}

class Shape_3
{
	public static void main(String args[])
	{
		Shape s = new Shape(3,5);
		Rectangle r = new Rectangle(9,4);
		Triangle t = new Triangle(8,5);
		System.out.print("Area of Rectangle is : "+r.area());
		System.out.print("\n\nArea of Triangle is : "+t.area());
	}
}
