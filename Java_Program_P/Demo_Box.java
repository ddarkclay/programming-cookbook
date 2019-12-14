class Box
{
  double width;
  double height;
  double depth;
}

class Demo_Box
{
  public static void main(String args[])
  {
      Box b = new Box();
      
      double vol;

      b.width = 5;
      b.height = 7;
      b.depth = 6;

     vol = b.width* b.height *b.depth;
     System.out.print(vol);
  }
}