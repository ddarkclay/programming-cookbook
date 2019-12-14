package packdemo;
public class Prime
{
	public boolean primecal(int n)
	{
		boolean flag=false;
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				flag=true;
				break;
			}
		}
		return flag;
	}
}
