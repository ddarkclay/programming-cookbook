class MultiTry
{
  public static void main(String args[])
  {
     try
     {
	int num = args.length;
 	
	try
	{
	   int numValue = Integer.parseInt(args[0]);
	   System.out.println("The square is  " + (numValue*numValue));
	}
	catch(NumberFormatException nb)
	{
	   System.out.println("Not a number ! ");  
	}
     }
     catch(ArrayIndexOutOfBoundsException ne)
     {
	   System.out.println("No arguments given ! ");  
     }
  }
}
