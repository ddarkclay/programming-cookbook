class Hello extends Thread
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print("Hello\n");
	}
}

public class Hello_4
{	
	public static void main(String args[])
	{
		Hello o = new Hello();
		o.start();
	}	
}
