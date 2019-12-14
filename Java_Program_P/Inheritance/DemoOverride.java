// Using runtime polimorphism

class Figure
{
  double dim1;
  double dim2;

  Figure(double a, double b)
  {
    dim1 = a;
    dim2 = b;
  }
  
  double area()
  {
    System.out.println("Area for Figure is undefined");
    return 0;
  }
}

class Rectangle extends Figure
{
  Rectangle(double a, double b)
  {
    super(a, b);
  }

//override area for rectangle
  double area()
  {
    System.out.println("Inside Area for Rectangle.");
    return dim1 * dim2;
  }
}

class Triangle extends Figure
{
  Triangle(double a, double b)
  {
    super(a, b);
  }

//override area for triangle
  double area()
  {
    System.out.println("Inside Area for Triangle.");
    return dim1 * dim2/2;
  }
}

class DemoOverride
{
  public static void main(String args[])
  {
    Figure f = new Figure(12,12);
    Rectangle r = new Rectangle(7,4);
    Triangle t = new Triangle(12,8);

    Figure figref;

    figref = r;
    System.out.println("Area is "+figref.area());

    figref = t;
    System.out.println("Area is "+figref.area());

    figref = f;
    System.out.println("Area is "+figref.area());
  }
}