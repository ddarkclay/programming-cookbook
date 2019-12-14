interface Area
{
   final static float pi = 3.14f;
   float compute(float x, float y);
}

class Rectangle implements Area
{
    public float compute(float x, float y)
    {
        return (x * y);
    }
}

class Circle implements Area
{
    public float compute(float x, float y)
    {
        return (pi * x * x);
    }
}

class InterfaceTest
{
    public static void main(String args[])
    {
        Rectangle r = new Rectangle();
        Circle c = new Circle();
        Area ar;
        ar = r;
        System.out.println("Area of rectangle = " + ar.compute(10,20));
        ar = c;
        System.out.println("Area of circle = " + ar.compute(10,0));
   }
}