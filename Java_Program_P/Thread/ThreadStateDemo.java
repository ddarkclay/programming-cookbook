import java.lang.*;

class ThreadStateDemo extends Thread
{
  Thread t;
   public static void main(String args[])
   {
      new ThreadStateDemo();
   }
    public ThreadStateDemo()
    {
      t = new Thread(this);
      System.out.println("Thread t is born !  ");
      System.out.println("Thread t is ready !  ");
      t.start();
    }
    public void run()
    {
       System.out.println("Thread t is running !  ");
    }
}