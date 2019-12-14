// Demonstration throws

class ThrowSDemo
{
   
       static void demoproc() throws IllegalAccessException
        {

	   System.out.println("Inside Throwone  ");
	   throw new IllegalAccessException("Demo");      
        }   

   public static void main(String args[])
   {
        try
        {
	demoproc();
        }
        catch(IllegalAccessException e)
        {
	System.out.println("Caught :  "+e);
        }      
    }  
}