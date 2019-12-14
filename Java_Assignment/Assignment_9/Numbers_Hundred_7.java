class Numbers extends Thread
{
	int i,j;
	public void run()
	{
		for(i=1;i<=100;i++)
		{
			System.out.print(i+"\n");
		}
	}
}

public class Numbers_Hundred_7
{	
	public static void main(String args[])
	{
		Numbers o = new Numbers();
		o.start();
	}	
}
