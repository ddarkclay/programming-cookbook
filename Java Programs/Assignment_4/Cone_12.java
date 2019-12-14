import java.util.Scanner;
class Cone
{	
	Double area , volume;
	
	Cone(int r , int s)
	{
		area = 3.14 * r * s;
		System.out.print("\n\nArea of Cone is : "+area);
	}
	
	Cone(int r , Double h)
	{
		volume = 0.33*3.14*r*r*h;
		System.out.print("\n\nVolume of Cone is : "+volume);
	}
	
}

public class Cone_12
{
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int radius,side;
		Double height;
		System.out.print("Enter Radius of Cone: ");
		radius = s.nextInt();
		System.out.print("Enter Height of Cone : ");
		height = s.nextDouble();
		System.out.print("Enter Side of Cone : ");
		side = s.nextInt();
		Cone c1 = new Cone(radius , side);
		Cone c2 = new Cone(radius, height); 
	}
}

