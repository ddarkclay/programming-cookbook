import java.util.Scanner;
class Concatinate_2
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str1,str2;
		System.out.print("Enter First String : ");
		str1 = s.nextLine();
		System.out.print("Enter Second String : ");
		str2 = s.nextLine();
		System.out.print("\nConcatinating String is : "+(str1+str2));
	}
}
