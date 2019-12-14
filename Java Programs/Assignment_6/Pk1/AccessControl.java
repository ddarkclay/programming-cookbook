package Pk1;
public class AccessControl
{
	private int p;
	public int q;
	protected int r;
	int s;
	public AccessControl(int a, int b, int c, int d)
	{
		p = a; q = b; r = c; s = d;
		System.out.print("p = "+p+"\nq = "+q+"\nr = "+r+"\ns = "+s);
	}
}
