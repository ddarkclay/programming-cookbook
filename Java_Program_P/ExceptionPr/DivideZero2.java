public class DivideZero2
{
    public static void main(String args[])
    {
        int a,b,c;
        try
        {
            a=Integer.parseInt(args[0]);
            b=Integer.parseInt(args[1]);
            c=a/b;
            System.out.println("Ans ="+c);
        }
        catch(ArrayIndexOutOfBoundsException e1)
        {
            System.out.println("Error : Not Entered Arrguments");
            System.out.println(e1.getMessage());
        }
        catch(ArithmeticException e)
        {
            System.out.println("Error : Not Divisible by 0");
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
        catch(NumberFormatException e2)
        {
            System.out.println("Error : Please Enter Integer Value"); 
        }

    }
}
