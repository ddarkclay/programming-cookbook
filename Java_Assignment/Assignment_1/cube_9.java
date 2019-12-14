import java.util.Scanner;
class cube_9 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int a = s.nextInt();
		System.out.println();
		System.out.println("Cube of " + a + " is : " + (a*a*a));
	}
}
