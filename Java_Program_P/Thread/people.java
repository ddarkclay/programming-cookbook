class hotel
{
   boolean available;
   hotel()
  {
    available = true; 
   }
 public synchronized void take()
 {
     while(!available)
      {
	try
	{
	   System.out.println("Wait condition.....!!!");
 	    wait();
	}
	catch(Exception e){}
      }
      available = false;
  }

 public synchronized void down()
 {
  available = true;
  notify();
 }
}

class cust extends Thread
{
   hotel h;
   int num;

   cust(int n, hotel ht)
   {
       num = n;
       h = ht;
   }
   
  public void eat()
  {
    h.take();
    System.out.println("Customer eating....!!");
  }

  public void think()
  {
     h.down();
     System.out.println("Customer thinking....!!");
  }

  public void run()
  {
      while(true)
       {
          eat();
          try
         {
               sleep(5000);
         }
         catch(Exception e) {}
          think(); 
        /* try
         {
               sleep(5000);
         }
         catch(Exception e) {}*/
       }
  }
}

class people
{
      public static void main(String args[])
       {
           hotel h1 = new hotel();
           cust c = new cust(3,h1);
           c.start();            
        }
}