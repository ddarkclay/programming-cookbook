import java.util.Scanner;
public class binary_3 {
	
	public static void main (String[] args) {
		int num,dec_value = 0,base = 1;  
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter a Binary Number : ");
		num = obj.nextInt();
		int temp = num;
		while (temp > 0) 
		{ 
			int last_digit = temp % 10; 
			temp = temp / 10;  
			dec_value += last_digit * base; 
			base = base * 2; 
		   
		} 
		System.out.println();
		System.out.println("Decimal Equivalent of " +num+ " is : " +dec_value);
	}
}

