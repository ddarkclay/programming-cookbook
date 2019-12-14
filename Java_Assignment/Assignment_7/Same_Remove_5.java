import java.util.Scanner;
public class Same_Remove_5 {
	
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter First String : ");
		String str1 = s.next();
		System.out.print("Enter Second String : ");
		String str2 = s.next();
		int i,j;
		char ar1[] = str1.toCharArray();
		char ar2[] = str2.toCharArray();
		for(i=0;i<ar1.length;i++)
		{
			boolean bMatch = false;
			for(j=0;j<ar2.length;j++)
			{
				if((String.valueOf(ar1[i])).toLowerCase().equals(((String.valueOf(ar2[j])).toLowerCase())))
				{
					bMatch = true;
					break;
				}
			}
			if(bMatch)
			{
				str1 = str1.replaceAll(String.valueOf(ar1[i]).toUpperCase(),"");
				str1 = str1.replaceAll(String.valueOf(ar1[i]).toLowerCase(),"");
				str2 = str2.replaceAll(String.valueOf(ar1[i]).toUpperCase(),"");
				str2 = str2.replaceAll(String.valueOf(ar1[i]).toLowerCase(),"");
			}
		}
		System.out.print("\n\nModified First String is  : "+str1+"\nModified Second String is : "+str2);
	}
}

