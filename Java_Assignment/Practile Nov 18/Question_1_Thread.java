class Evens extends Thread
{
	int i;
	public void run()
	{
		for(i = 50; i<=100; i++)
		{
			if(i%2 == 0)
				System.out.println("Even Number : "+i);
		}
	}
}

class Odds extends Thread
{
	int i;
	public void run()
	{
		for(i = 50; i<=100; i++)
		{
			if(i%2 == 1)
				System.out.println("Odd Number : "+i);
		}
	}
}


class Question_1_Thread
{
	public static void main(String args[])
	{
		Evens e = new Evens();
		Odds o = new Odds();
		e.start();
		o.start();
	}
}


