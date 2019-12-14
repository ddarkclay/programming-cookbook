import java.util.Scanner;
class Count_Vovels_1
{
	public static void main(String args[])
	{
		Scanner s = new Scanner(System.in);
		String str;
		int vowels=0,consonants=0;
		System.out.print("Enter a String : ");
		str = s.next();
		for(int i=0;i<str.length();i++)
		{
			char ch=str.charAt(i);
			if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| ch=='u'|| ch=='U')
				vowels++;
			else
				consonants++;
		}
		System.out.print("\nVovels in "+str+" is : "+vowels);
		System.out.print("\nConsonants in "+str+" is : "+consonants);
	}
}
