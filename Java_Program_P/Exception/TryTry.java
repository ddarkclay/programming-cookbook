class TryTry
{
   public static void main(String args[])
   {
        try
        {
             int num = args.length;
             try
             {
		int numValue = Integer.parseInt(args[0]);
		System.out.println("The square is: "+numValue*numValue); 
             }
             catch(NumberFormatException e)
             {
		System.out.println("Not a number !"+e);
             }
        }

        catch(ArrayIndexOutOfBoundsException e)
       {
           System.out.println("No arguments given !" +e);
       }
   }
}