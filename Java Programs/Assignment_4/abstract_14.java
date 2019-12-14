import java.util.Scanner;
abstract class Figure
{	
	abstract void print();
}

class Pattern extends Figure
{
	int r,c;
	void print()
	{
		for(r=1; r<=4; r++)
		{
			for(c=1; c<=r; c++)
			{
				System.out.print(c+" ");
			}
			System.out.print("\n");
		}
	}
}

public class abstract_14 {
	public static void main(String args[]) {
		Pattern p = new Pattern();
		p.print();
	}		
}
