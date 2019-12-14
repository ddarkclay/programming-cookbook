import java.util.Scanner;
public class square {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a Number : ");
		int num;
		num = s.nextInt();
		System.out.print("Square Number is : " +num*num);
	}
}
