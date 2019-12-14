import java.util.Scanner;
class Character_Count_11
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str;
		int character=0;
		System.out.print("Enter a String : ");
		str = s.nextLine();
		System.out.print("Enter a Character which you want to find in string : ");
		char c = s.next().charAt(0);
		for(int i=0;i<str.length();i++)
		{
			char ch=str.charAt(i);
			if(ch == c)
				character++;
		}
		System.out.print("\nCharacter "+c+" in "+str+" is : "+character);
	}
}
