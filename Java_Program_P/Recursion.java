class factorial
{
   int fact(int n)
   {
     int res;
     if(n==1)   return 1;
       res =   fact(n-1)*n;
       return res;   
   }
}

class Recursion
{
  public static void main( String args[])
  {
     factorial f = new factorial();
     System.out.println("Factorial is : "+ f.fact(5));
  }
}