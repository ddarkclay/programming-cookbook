import java.lang.*;

class MyThread1 extends Thread
{
	public static void main(String args[])
	{
	     MyThread1 ex = new MyThread1();
	     ex.create();
	     System.out.println("This is the main Thread");
	}
	
	public void create()
	{
		Thread t = new Thread(this);
		t.start();
	}
	
	public void run()
	{
		while(true)
		{
		   try
		   {
		      System.out.println("This is the child thread");
		      Thread.sleep(8000);
		   }
		   catch(InterruptedException e){ }
		} 
	}
}