class A extends Thread
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print(i+" Thread A\n");
	}
}

class B extends Thread
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print(i+" Thread B\n");
	}
}

public class Thread_Demo
{	
	public static void main(String args[])
	{
		A o1 = new A();
		B o2 = new B();
		o1.start();
		o2.start();
	}	
}
