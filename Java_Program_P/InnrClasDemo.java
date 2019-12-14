// Demonstartion
class Outer
{
  int o_x = 100;
  
  void test()
  {
    for(int i=0;i<10;i++)
    {
     class Inner
     {
      void display()
      {
	System.out.println("Display : o_x = " + o_x);
      }
     }
    Inner inr = new Inner();
    inr.display();
   }
  }
}

class InnrClasDemo
{
  public static void main(String args[])
  {
    Outer outer = new Outer();
    outer.test();
  }
}