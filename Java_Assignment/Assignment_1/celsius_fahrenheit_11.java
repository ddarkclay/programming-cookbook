import java.util.Scanner;
class celsius_fahrenheit_11 {
	
	public static void main (String args[]) {
		Scanner s = new Scanner(System.in);
		System.out.println("*** Conversion of Celsius to Fahrenheit ***");
		System.out.println();
		System.out.println("1 = Conversion of Celsius to Fahrenheit , 2 = Conversion of Fahrenheit to Celsius ");
		System.out.println();
		System.out.print("What you want to Do !  ");
		int choice = s.nextInt();
		System.out.println();
		switch(choice)
		{
				case 1 :
					System.out.print("Enter Celsius : ");
					int c = s.nextInt();
					System.out.println();
					System.out.println("Fahrenheit is : " + ((c*1.8)+(32)));
					break;
				case 2 :
					System.out.print("Enter Fahrenheit : ");
					int f = s.nextInt();
					System.out.println();
					System.out.println("Celsius is : " + ((f-32)+(0.5)));
					break;
				default :
					System.out.println("Wrong Case !!!");
					
		}
		
	}
}

