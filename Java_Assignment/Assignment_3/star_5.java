public class star_5 {
	
	public static void main (String[] args) {  
		int i,j;
		char k;
		System.out.print("Given Output is : \n\n");
		for(i=1;i<=5;i++)
		{
			k='A';
			for(j=1;j<=9;j++)
			{
				if(j<=6-i || j>=4+i)
				{
					System.out.print(k);
					if(j<5)
						k++; 
					else
						k--;
				}
				else
				{
					System.out.print(" ");
					if(j==5)
						k--;
				}
			}
			System.out.print("\n");
		}
	}
}
