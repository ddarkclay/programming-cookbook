import java.util.Scanner;
class First_Capital_12
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str;
		System.out.print("Enter a String : ");
		str = s.nextLine();
		System.out.print("\nFinal String is : "+upperCaseFirst(str));
	}
	
	public static String upperCaseFirst(String value)
	{
		char[] array = value.toCharArray();
		array[0] = Character.toUpperCase(array[0]);
		for(int i=1;i<array.length;i++)
		{
			if(Character.isWhitespace(array[i-1]))
			{
				array[i] = Character.toUpperCase(array[i]);
			}
		}
		return new String(array);
	}
}
