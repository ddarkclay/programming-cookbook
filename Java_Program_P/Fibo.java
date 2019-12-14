class Fibo
{
  public static void main(String args[])
  {
     int a = 0, b = 1, c;
     System.out.print(a+" ");
     System.out.print(b+" ");
 
     while(a<50)
    {
           c = a+b;
	System.out.print(c+" ");
	a = b;
	b = c;
    }
    //a++;
  }
}