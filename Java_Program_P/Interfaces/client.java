interface Callback
{
     public void callback1(int param);
}

public class client implements Callback
{
     public void callback1(int p)
     {
	System.out.println("callback called with "+p);
     }

     void nonIfaceMeth()
     {
	System.out.println("classes that implement interfaces");        
     }
	public static void main(String args[])
	{
		client c = new client();
		c.callback1(10);
	}
}