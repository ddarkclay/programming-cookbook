class th1 extends Thread
{
	public void run()
	{
		for(int i=0;i<=50;i++)
		{
			System.out.println("I "+i);
		}
	}
}

class th2 extends Thread
{
	public void run()
	{
		for(int j=0;j<=50;j++)
		{
			try
			{
				if(j==25)
				{
					sleep(10000);
				}
				else
			
				System.out.println("J "+j);
			}
		
		 	catch(InterruptedException e)
		 	{
				System.out.println(e);
			 }
		}	 
	}
}
class th3 extends Thread
{
	public void run()
	{
		for(int k=0;k<=50;k++)
		{
			System.out.println("K "+k);
		}
	}
}
class thread2
{
		public static void main(String args[])
		{
			th1 t1=new th1();
			th2 t2=new th2();
			th3 t3=new th3();
			t1.setName("Thread1");
			t2.setName("Thread2");
			t3.setName("Thread3");
			t1.start();
			System.out.println("Thread1");
			t2.start();
			System.out.println("Thread2");
			t3.start();
			System.out.println("Thread3");			
		}	
}