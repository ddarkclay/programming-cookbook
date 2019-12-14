import java.util.Scanner;
class area_triangle_7 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Base of Triangle : ");
		int b = s.nextInt();
		System.out.print("Enter Height of Triangle : ");
		int h = s.nextInt();
		System.out.println();
		System.out.println("Area of Triangle is : " + (0.5*b*h));
	}
}
