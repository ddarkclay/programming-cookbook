class Odd extends Thread
{
	int i;
	public void run()
	{
		for(i=1;i<=30;i=i+2)
			System.out.print(i+" Odd Number\n");
	}
}

class Even extends Thread
{
	int i;
	public void run()
	{
		for(i=2;i<=30;i=i+2)
			System.out.print(i+" Even Number\n");
	}
}

public class Odd_Even_2
{	
	public static void main(String args[])
	{
		Odd o1 = new Odd();
		Even o2 = new Even();
		o1.start();
		o2.start();
	}	
}
