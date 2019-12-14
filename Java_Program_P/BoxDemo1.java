class Box
{
   double height;
   double width;
   double depth;
        
   double volume()
   { 
	return height*width*depth; 
   }

   void setdim(double h, double w, double d)
   {
       height = h;
       width = w;
       depth = d;
   }
}

class BoxDemo1
{
   public static void main(String args[])
   {
      Box b = new Box();
      b.setdim(4,3,5);
      
	double vol;
	vol = b.volume();
	System.out.println( "Volume: "+ vol);
 }
}