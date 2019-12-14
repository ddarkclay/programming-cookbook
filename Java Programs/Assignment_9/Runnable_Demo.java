Class A1 implements Runnable
{
	public void run()
	{
		try
		{
			int i;
			for(i=0;i<=10;i++)
				System.out.print(i+" Thread A\n");
		}
		catch(InterruptedException e)
		{
			System.out.print(i+" Interrupted");
		}
	}
}

/*Class B implements Runnable
{
	public void run()
	{
		try
		{
			int i;
			for(i=0;i<=10;i++)
				System.out.print(i+" Thread B\n");
		}
		catch(InterruptedException e)
		{
			System.out.print(i+" Interrupted");
		}
	}
}
*/
public class Runnable_Demo
{	
	public static void main(String args[])
	{
		A1 o1 = new A1();
		//B o2 = new B();
		Thread t1 = new Thread(o1);
		//Thread t2 = new Thread(o2);
		t1.start();
		//t2.start();
	}	
}
