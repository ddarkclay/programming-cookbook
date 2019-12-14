class Fibonacci implements Runnable
{
	int i,a=1,b=1,c;
	public void run()
	{
		System.out.print(a+"\n"+b+"\n");
		for(i=2;i<10;i++)
		{
			c = a + b;
			System.out.print(c+"\n");
			a=b;b=c;
		}
	}
}


public class Fibonacci_6
{	
	public static void main(String args[])
	{
		Fibonacci o = new Fibonacci();
		Thread t = new Thread(o);
		t.start();
	}	
}
