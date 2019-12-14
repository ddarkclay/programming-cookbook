class table extends Thread
{
	int i,m,j;
	public void run()
	{
		for(i=1;i<=10;i++)
		{
			for(j=2;j<=20;j++)
			{
				System.out.print(i*j+"\t");
			}
			System.out.print("\n");
		}
	}
}

public class Table_Demo_5
{	
	public static void main(String args[])
	{
		table o = new table();
		o.start();
	}	
}
