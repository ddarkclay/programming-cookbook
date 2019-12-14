import Shape.*;
class ShapeDemo_11
{
	public static void main(String args[])
	{
		Circle c = new Circle();
		c.area(5);
		c.perimeter(5);
		Triangle t = new Triangle();
		t.area(7,4);
		t.perimeter(8,8,5);
		Square s = new Square();
		s.area(6);
		s.perimeter(6);
	}
}
