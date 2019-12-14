class th1 extends Thread
{
	public void run()
	{
		for(int i=0;i<50;i++)
		{
			System.out.println("I= "+i);
		}
	}
}
class th2 extends Thread
{
	public void run()
	{
		for(int j=0;j<50;j++)
		{
			System.out.println("J= "+j);
		}
	}
}
class th3 extends Thread
{
	public void run()
	{
		for(int k=0;k<50;k++)
		{
			System.out.println("K= "+k);
		}
	}
}
class thread1
{
	public static void main(String args[])
	{
		th1 t1=new th1();
		th2 t2=new th2();
		th3 t3=new th3();
		t1.setName("Thread1");
		t2.setName("Thread2");
		t3.setName("Thread3");
		t3.setPriority(Thread.MAX_PRIORITY);
		t1.setPriority(Thread.MIN_PRIORITY);
		t2.setPriority(Thread.NORM_PRIORITY);
		t3.start();
		t2.start();	
		t1.start();
		System.out.println("Thread3 having Priority:  "+t3.getPriority());
		System.out.println("Thread1 having Priority:  "+t1.getPriority());
		
		System.out.println("Thread2 having Priority:  "+t2.getPriority());	
	}
}