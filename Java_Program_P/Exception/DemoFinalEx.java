class DemoFinalEx
{
   public static void main(String args[])
  {
        try
        {
		cal(8,0);
                  System.out.println("Try Block....");
	 	System.out.println("");
         }
          catch(Exception e)
          {
		System.out.println("Error .....!!!  "+e);
          }
          finally
          {
		System.out.println("");
		cal(3,0);
		System.out.println("Finally Block initialised.");
          }
   }
   static void cal(int a, int b)
   {
       int c = a / b;
       System.out.println( c);
   }
}