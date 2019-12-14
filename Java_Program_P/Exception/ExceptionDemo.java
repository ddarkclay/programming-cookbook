class ExceptionDemo
{
   public static void main(String args[])
   {
        try
        {
	String txt = args[0];
	System.out.println("My text is ...."+txt);
        }
        catch(Exception e)
        {
	System.out.println("No arguments given! "+e);
        }
    }
}