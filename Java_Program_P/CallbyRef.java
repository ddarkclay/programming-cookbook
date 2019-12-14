class Test
{
  int a, b;
  Test(int i, int j)
  {
   a=i;
   b=j;
  }
  void meth(Test o)
  {
    o.a *=2;
    o.b /=2;
  }
}

class CallbyRef
{
  public static void main(String args[])
   {
     Test t = new Test(15,20);
      
      System.out.println("a & b before call : "+t.a+" & "+t.b);

      t.meth(t);

      System.out.println("a & b after call : "+t.a+" & "+t.b); 
  }
} // firebase , android hive