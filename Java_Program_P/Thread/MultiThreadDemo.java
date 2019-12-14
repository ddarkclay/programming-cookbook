class NewThread implements Runnable
{
 String name;
 Thread t;

 NewThread(String threadname)
 {
  name = threadname;
  t = new Thread(this, name);
  System.out.println("new thread: "+t);
  t.start();
 }

 public void run()
 {
	 try
	 {
		 for(int i=5;i>0;i--)
		 {
		 	System.out.println(name+" : "+i);
		 	Thread.sleep(5000);
		}
	}
	catch(InterruptedException e)
	{
		System.out.println(name + "  Interrupted");
	}
	System.out.println(name + "  Existing");
}
}

 class MultiThreadDemo
 {
 	public static void main(String args[])
 	{
		new NewThread("one");
		new NewThread("two");
		new NewThread("three");

		try
		{
			Thread.sleep(10000);
		}
		catch(InterruptedException e)
		{
			System.out.println("Main thread interrupted");
		}
		System.out.println("Main thread existing");
	}
 }