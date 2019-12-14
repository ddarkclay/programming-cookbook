class Test
{
  void meth(int i, int j)
  {
    i*=2;
    j/=2;
  }
}

class CallbyValue
{
  public static void main(String args[])
   {
     Test t = new Test();
      int a = 5;
      int b = 10;

      System.out.println("a & b before call : "+a+" & "+b);

      t.meth(a,b);

      System.out.println("a & b after call : "+a+" & "+b); 
  }
}