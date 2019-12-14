class ExcepDemo
{
   public static void main(String args[])
   {
        try
        {
	int c = calculate(9,0);
	System.out.println(c);
        }
        catch(Exception e)
        {
	System.err.println("Exception occurred :" + e.toString());
	e.printStackTrace();
        }
    }
    
    static int calculate( int a, int b)
    {
	int c = a/b;
	return c;
    }
}