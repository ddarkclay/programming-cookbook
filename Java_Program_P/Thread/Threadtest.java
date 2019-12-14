class Threadtest implements Runnable
{
 Thread t;

  public Threadtest()
  {
    System.out.println(Thread.currentThread().getName());
    t = new Thread(this);
    t.setName("Our Thread..");
    t.start();
  }

  public void run()
  {
      System.out.println(Thread.currentThread().getName());
      System.out.println(Thread.activeCount());
      System.out.println(t.isAlive());
  }

  public static void main(String args[])
  {
    new Threadtest();
  }
}