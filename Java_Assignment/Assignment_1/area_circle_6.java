import java.util.Scanner;
class area_circle_6 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Radius of Circle : ");
		int r = s.nextInt();
		System.out.println();
		System.out.println("Area of Circle is : " + (3.14+r*r));
		System.out.println("Circumference of Circle is : " + (2*3.14*r));
	}
}

