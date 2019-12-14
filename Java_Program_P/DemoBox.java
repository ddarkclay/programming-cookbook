class Box
{
  double width;
  double height;
  double depth;
}

class DemoBox
{
 public static void main(String args[])
 {
  Box b = new Box();

  double vol;

  b.width = 10;
  b.height = 20;
  b.depth = 30;

  vol = b.width *b.height*b.depth;

  System.out.print(vol);
 }
}