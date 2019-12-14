class ExcepCatchDemo
{
   public static void main(String args[])
   {
        try
        {
	String num = args[0];
	int numValue = Integer.parseInt(num);
	System.out.println("The squre is: " +numValue*numValue);
        }

        catch(ArrayIndexOutOfBoundsException e)
        {
	System.out.println("No arguments given!    "+ e);
        }

        catch(NumberFormatException e)
        {
	System.out.println("Not a number!    "+e);
        }
    }
}