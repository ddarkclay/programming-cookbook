import java.util.Scanner;
class Spaces_Count_10
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str;
		int spaces=0;
		System.out.print("Enter a String : ");
		str = s.nextLine();
		for(int i=0;i<str.length();i++)
		{
			char ch=str.charAt(i);
			if(ch == ' ')
				spaces++;
		}
		System.out.print("\nSpaces in "+str+" is : "+spaces);
	}
}
