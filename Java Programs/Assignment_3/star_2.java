import java.util.Scanner;
public class star_2 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter How many lines you want to show : ");
		int line,r,c,sp,spcnt;
		line=obj.nextInt();
		spcnt=line-0;
		System.out.print("\n\n");
		for(r=line-1;r>=1;r--)
		{
			for(sp=line;sp<=spcnt;sp++)
				System.out.print(" ");
			for(c=1;c<=r;c++)
				System.out.print(" *");
			System.out.print("\n");
			spcnt++;
		}
	}
}

		                                                                                                                                                                                            
		
