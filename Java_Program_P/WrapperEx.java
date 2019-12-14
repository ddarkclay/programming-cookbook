public class WrapperEx
{
   public static void main(String args[])
   {
        int a = 20;

        Integer i = Integer.valueOf(a); // converting int to Integer

        Integer j = a;  // autoboxing

        System.out.print(a+" " + i + " " + j);

   }
}