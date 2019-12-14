class Prime extends Thread
{
	int i,j;
	public void run()
	{
		for(i=1;i<=30;i++)
		{
			for(j=2;j<i;j++)
				if(i % j == 0)
					break;
				if(i == j)
					System.out.print(i+" Prime Number\n");
				
		}
	}
}

class Fibonacci extends Thread
{
	int i,a=1,b=1,c;
	public void run()
	{
		System.out.print(a+" Fibonacci Number\n"+b+" Fibonacci Number\n");
		for(i=2;i<10;i++)
		{
			c = a + b;
			System.out.print(c+" Fibonacci Number\n");
			a=b;b=c;
		}
	}
}

class Hi extends Thread
{
	int i;
	public void run()
	{
		for(i=1;i<=10;i++)
			System.out.print("Hi\n");
	}
}

public class Prime_Fibo_Hi_3
{	
	public static void main(String args[])
	{
		Prime o1 = new Prime();
		Fibonacci o2 = new Fibonacci();
		Hi o3 = new Hi();
		o1.start();
		o2.start();
		o3.start();
	}	
}
