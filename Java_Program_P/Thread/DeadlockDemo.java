public class DeadlockDemo implements Runnable
{
   public static void main(String args[])
   {
	DeadlockDemo d1 = new DeadlockDemo();
	DeadlockDemo d2 = new DeadlockDemo();
	Thread t1 = new Thread(d1);
	Thread t2 = new Thread(d2);

	d1.grabIt = d2;
	d2.grabIt = d1;

	t1.start();
	t2.start();

	System.out.println("Started");
	try
	{
	   t1.join();
	   t2.join();
	}
	catch(InterruptedException e)
	{
	   System.out.println("error ocurred");
	}
	System.exit(0);
   }

   DeadlockDemo grabIt;
   public synchronized void run()
   {
	try
	{ 
	   Thread.sleep(5000);
	}
	catch(InterruptedException e)
	{ 
	   System.out.println("error ocurred");
	}
	grabIt.syncIt();
   }

   public synchronized void syncIt()
   {
	try
	{ 
	   Thread.sleep(5000);
	   System.out.println("Sync");
	}
	catch(InterruptedException e)
	{ 
	   System.out.println("error ocurred");
	}
	   System.out.println("In the synchIt() method");
   }
}