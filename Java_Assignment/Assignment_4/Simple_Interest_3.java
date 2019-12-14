import java.util.Scanner;
class Intrest
{	
	Scanner s = new Scanner(System.in);
	double si,amount,r;
	int t;
	
	Intrest()
	{
		System.out.print("Enter Amount : ");
		amount = s.nextDouble();
		System.out.print("Enter Rate of Interest : ");
		r = s.nextDouble();
		System.out.print("Enter Time Period : ");
		t= s.nextInt();
	}
	
	Double calculate()
	{
		si = amount*(1+(r*t));
		return si;
	}
	
}

public class Simple_Interest_3 {
	public static void main(String args[]) {
		Intrest obj = new Intrest();
		Double SI;
		SI = obj.calculate();
		System.out.print("\n\nSimple Interest of These Values are : "+SI);
	}
}

