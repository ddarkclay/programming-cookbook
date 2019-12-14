import java.util.Scanner;
public class star_7 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter How many lines you want to show : ");
		int line,r,c,no;
		line=obj.nextInt();
		for(r=0;r<=line;r++)
		{
			if(r%2==0)
				no=0;	
			else
				no=1;
			for(c=1;c<=r;c++)
				{
					System.out.print(no +" ");
					if(no==0)
						no=1;
					else
						no=0;
				}
				System.out.print("\n");
		}
	}
}

		                                                                                                                                                                                            
		
