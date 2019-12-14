class First extends Thread
{
	int i,j;
	public void run()
	{
		for(i=1;i<=100;i++)
		{
			System.out.print(i+" First Thread\n");
		}
	}
}

class Second extends Thread
{
	int i,a=1,b=1,c;
	public void run()
	{
		for(i=101;i<=200;i++)
		{
			System.out.print(i+" Second Thread\n");
		}
	}
}

class Third extends Thread
{
	int i;
	public void run()
	{
		for(i=201;i<=300;i++)
		{
			System.out.print(i+" Third Thread\n");
		}
	}
}

public class Numbers_5
{	
	public static void main(String args[])
	{
		First o1 = new First();
		Second o2 = new Second();
		Third o3 = new Third();
		o2.setPriority(Thread.MAX_PRIORITY);
		o1.setPriority(Thread.MIN_PRIORITY);
		o3.setPriority(Thread.NORM_PRIORITY);
		o1.start();
		o2.start();
		o3.start();
	}	
}
