class A implements Runnable
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print(i+" Thread A\n");
	}
}

class B implements Runnable
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print(i+" Thread B\n");
	}
}

public class Runnable_Demo
{	
	public static void main(String args[])
	{
		A o1 = new A();
		B o2 = new B();
		Thread t1 = new Thread(o1);
		Thread t2 = new Thread(o2);
		t1.start();
		t2.start();
	}	
}
