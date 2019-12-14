class ChopStick
{
  boolean available;
  ChopStick()
  {
    available = true;
  }
  public synchronized void takeup()
  {
    while(!available)
    {
      try
      {
	System.out.println("Philosopher is waiting for other chopstick");
	wait();
      }
      catch(InterruptedException e)
      {}
    }
     available = false;
  }
  public synchronized void putdown()
  {
    available = true;
    notify();
  }
}

class Philosopher extends Thread
{
   ChopStick left,right;
   int philo_num;
    
   Philosopher(int num, ChopStick c1, ChopStick c2) 
   {
     philo_num = num;
     left = c1;
     right = c2;
   }
   public void eat()
   {
     left.takeup();
     right.takeup();
     System.out.println("Philosopher " + (philo_num+1)+"   is eating");
   }
   public void think()
   {
     left.putdown();
     right.putdown();
     System.out.println("Philosopher " + (philo_num+1)+"    is thinking");
   }

   public void run()
   {
     while(true)
     {
	eat();
	try
	{
	  sleep(15000);
	}
	catch(InterruptedException e)
	{}
	think();
	try
	{
	  sleep(10000);
	}
	catch(InterruptedException e)
	{}
     }
   }
}

class Dining
{
  static ChopStick[] chopsticks = new ChopStick[5];
  static Philosopher[] philos = new Philosopher[5];
  public static void main(String args[])
  {
      for (int i=0; i<=4; i++)
      {
	chopsticks[i] = new ChopStick();
      }
      for (int i=0; i<=4; i++)
      {
	philos[i] = new Philosopher(i,chopsticks[i],chopsticks[(i+1)%5]);
      }
      for (int i=0; i<=4; i++)
	philos[i].start();
  }
}