import java.util.Scanner;
public class star_4 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter How many lines you want to show : \n\n");
		char r,c;
		for(r='A';r<='G';r++)
		{
			for(c='A';c<=r;c++)
			{
				if(r%2==1)
					System.out.print(c+" ");
			}
			System.out.print("\n");
		}
	}
}

		                                                                                                                                                                                            
		
