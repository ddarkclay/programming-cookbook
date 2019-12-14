// Demonstartion inner class
class Outer
{
  int o_x = 101;
  
  void test()
  {
    Inner inr = new Inner();
    inr.display();
  }

  class Inner
  {
    void display()
    {
	System.out.println("Display : o_x = " + o_x);
    }
  }
}

class InClasDemo
{
  public static void main(String args[])
  {
    Outer outer = new Outer();
    outer.test();
  }
}