class ExcepFinalDemo
{
   static String s ;
   public static void main(String args[])
   {
        try
        {
		System.out.println("A");
		ExcepFinalDemo.staticmethod();
		System.out.println("B");
        }
       /* catch(NullPointerException e)
        {
		System.out.println("Exception occured !"+e);
		System.out.println("C");
        } */
        finally
        {
		System.out.println("D");
        }
    }
        static void staticmethod()
        {
	System.out.println(s.length());	
        }   
}