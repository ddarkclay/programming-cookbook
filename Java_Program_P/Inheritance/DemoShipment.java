//multilevel hierarchy

class Box
{
  private double width;
  private double height;
  private double depth;

//clone of an object
  Box(Box o)
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

  BoxWeight(BoxWeight o)// pass object to constructor
  {
   super(o);
   weight = o.weight;
  }
  
  BoxWeight(double w,double h,double d, double m)
  {
   super(w,h,d); //call superclass constructor
   weight = m;
  }

  BoxWeight()
  {
   super();
   weight = -1;
  }

  BoxWeight(double len, double m)
  {
   super(len);
   weight = m;
  }
}

class Shipment extends BoxWeight
{
  double cost;

  Shipment(Shipment o)
  {
    super(o);
    cost = o.cost;
  }

  Shipment(double w, double h, double d, double m, double c)
  {
    super(w,h,d,m);
    cost = c;
  }

  Shipment()
  {
    super();
    cost = -1;
  }

  Shipment(double len, double m, double c)
  {
    super(len, m);
    cost = c;
  }
}

class DemoShipment
{
  public static void main(String args[])
  {
    Shipment s1 = new Shipment(10,15,20,12,2.34);
     
    double vol;

    vol = s1.volume();
    System.out.println("Volume of s1 is " + vol);
    System.out.println("Weight of s1 is " + s1.weight);
    System.out.println("Shiping cost : $ " + s1.cost);
    System.out.println();

  }
}