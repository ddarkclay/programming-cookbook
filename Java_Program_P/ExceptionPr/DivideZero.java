public class DivideZero
{
    public static void main(String args[])
    {
        int a,b,c;
        try
        {
            a=10;
            b=0;
            c=a/b;
        }
        catch(ArithmeticException e)
        {
            System.out.println("Error : Not Divisible by 0");
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }
}
