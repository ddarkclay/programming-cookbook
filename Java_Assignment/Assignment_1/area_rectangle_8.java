import java.util.Scanner;
class area_rectangle_8 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Length of Rectangle : ");
		int l = s.nextInt();
		System.out.print("Enter Breadth of Rectangle : ");
		int b = s.nextInt();
		System.out.println();
		System.out.println("Area of Rectangle is : " + (l*b));
	}
}
