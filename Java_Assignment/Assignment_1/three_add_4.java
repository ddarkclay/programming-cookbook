import java.util.Scanner;
class three_add_4 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First number : ");
		int a = s.nextInt();
		System.out.print("Enter Second number : ");
		int b = s.nextInt();
		System.out.print("Enter Third number : ");
		int c = s.nextInt();
		System.out.println();
		System.out.println("Addition of " + a + " , " + b + " And " + c + " is : " + (a+b+c));
	}
}
