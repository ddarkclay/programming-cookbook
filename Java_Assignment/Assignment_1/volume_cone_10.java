import java.util.Scanner;
class volume_cone_10 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter Height of Cone : ");
		int h = s.nextInt();
		System.out.print("Enter Radius of Cone : ");
		int r = s.nextInt();
		System.out.println();
		System.out.println("Volume of Cone is : " + (0.33*3.14*r*r*h));
	}
}

