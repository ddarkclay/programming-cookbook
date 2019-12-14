import java.util.Scanner;
class arithmatic_3 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First number : ");
		int a = s.nextInt();
		System.out.print("Enter Second number : ");
		int b = s.nextInt();
		System.out.println();
		System.out.println("1 = Addition , 2 = Subtraction , 3 = Multiplication , 4 = Division");
		System.out.println();
		System.out.print("Enter your Choice : ");
		System.out.println();
		int choice = s.nextInt();
		switch(choice)
		{
			case 1 :
				System.out.println("Addition of " + a + " and " + b + " is : " + (a+b));
				break;
			case 2 :
				System.out.println("Subtraction of " + a + " and " + b + " is : " + (a-b));
				break;
			case 3 :
				System.out.println("Mutiplication of " + a + " and " + b + " is : " + (a*b));
				break;
			case 4 :
				System.out.println("Division of " + a + " and " + b + " is : " + (a/b));
				break;
			default :
				System.out.println("Type right correct choice");
		
		}
	}
}
