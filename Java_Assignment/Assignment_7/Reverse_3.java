import java.util.Scanner;
class Reverse_3
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str,reverse="";
		System.out.print("Enter a String : ");
		str = s.next();
		for(int i = str.length()-1;i>=0;i--)
		{
				reverse = reverse +str.charAt(i);
		}
		System.out.print("\nReverse String is : "+reverse);
	}
}
