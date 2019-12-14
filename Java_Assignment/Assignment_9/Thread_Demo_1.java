class A implements Runnable
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print("A = "+i+"\n");
	}
}

class B implements Runnable
{
	int i;
	public void run()
	{
		for(i=1;i<=100;i++)
			System.out.print("B = "+i+"\n");
	}
}

class C implements Runnable
{
	int i;
	public void run()
	{
		for(i=1;i<=60;i++)
			System.out.print(i+"\n");
	}
}

public class Thread_Demo_1
{	
	public static void main(String args[])
	{
		A o1 = new A();
		B o2 = new B();
		C o3 = new C();
		Thread t1 = new Thread(o1);
		Thread t2 = new Thread(o2);
		Thread t3 = new Thread(o3);
		t1.start();
		t2.start();
		t3.start();
	}	
}
