class Box
{
   double width;
   double height;
   double depth;

  Box(Box o)//clone of an object
  {
   width = o.width;
   height = o.height;
   depth = o.depth;
  }

  Box(double w,double h,double d)
  {
   width = w;
   height = h;
   depth = d;
  }
  
  Box()
  {
   width = -1;
   height = -1;
   depth = -1;
  }

  Box(double len)
  {
   width = height = depth = len;
  }

  double volume()
  {
    return width*height*depth;
  }
}

class BoxWeight extends Box
{
   double weight;

  BoxWeight(double w,double h,double d, double m)
  {
   width = w;
   height = h;
   depth = d;
   weight = m;
  }
}

class DemoBox
{
  public static void main(String args[])
  {
    BoxWeight b1 = new BoxWeight(6,3,7,0.056);
    BoxWeight b2 = new BoxWeight(12,15,20,43.3);
    double vol;

    vol = b1.volume();
    System.out.println("Volume of b1 is " + vol);
    System.out.println("Weight of b1 is " + b1.weight);
    System.out.println();

    vol = b2.volume();
    System.out.println("Volume of b2 is " + vol);
    System.out.println("Weight of b2 is " + b2.weight);
    System.out.println();
  }
}