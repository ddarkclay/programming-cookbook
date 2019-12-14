import java.util.Scanner;
public class String_Find_8 {
	
	public static void main (String[] args) 
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a String : ");
		String str = s.next();
		System.out.print("Enter a Character which you find in string : ");
		char ch1 = s.next().charAt(0);
		System.out.print("Enter a Character which you want to replace in string : ");
		char ch2 = s.next().charAt(0);
		str = str.replace(ch1,ch2);
		System.out.print("\nFinal String is : "+str);
	}
}

