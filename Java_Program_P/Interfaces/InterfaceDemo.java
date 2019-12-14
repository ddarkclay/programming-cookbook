interface Vehicle
{
	public void getWheel();
}

class Car implements Vehicle
{
	public void getWheel()
	{
		int i = 4;
	    System.out.println("Car has "+i+" wheels.");
	}
}

public class InterfaceDemo
{
   public static void main(String args[])
   {
	Car c = new Car();
	c.getWheel();
   }
}