class A
{

  synchronized void foo(B b)
  {
    String name = Thread.currentThread().getName();
    System.out.println(name +  "entered A.foo");
    
    try
    {
      Thread.sleep(5000);
    }
    catch(Exception e)
    {
	System.out.println("A interpreted");
    }
    System.out.println(name+"trying to call B.last()");
    b.last();
  }

  synchronized void last()
  {
    System.out.println("Inside A.last");
  }
}

class B
{

  synchronized void bar(A a)
  {
    String name = Thread.currentThread().getName();
    System.out.println(name +  "entered B.bar");
    
    try
    {
      Thread.sleep(5000);
    }
    catch(Exception e)
    {
	System.out.println("A interpreted"+e);
    }
    System.out.println(name+"trying to call A.last()");
    a.last();
  }

  synchronized void last()
  {
    System.out.println("Inside A.last");
  }
}

class Deadlock1 implements Runnable
{
  A a = new A();
  B b = new B();

  Deadlock1()
  {
    Thread.currentThread().setName("MainThread");
    Thread t = new Thread(this,"RacingThread");
    t.start();

    a.foo(b);//get lock on a this thread.
    System.out.println("Back in main Thread");
  }

  public void run()
  {
    b.bar(a);//get lock on b in other thread.
    System.out.println("Back in main Thread");
  }

  public static void main(String args[])
  {
    new Deadlock1();
  }
}