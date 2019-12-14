import java.util.Scanner;
public class star_6 {
	
	public static void main (String[] args) {  
		int r,c,sp,spcnt,count=1;
		spcnt=4;
		for(r=1;r<=5;r++)
		{
			for(sp=1;sp<=spcnt;sp++)
				System.out.print(" ");
			for(c=1;c<=r;c++)
			{
				System.out.print(count);
				count--;
			}
			count=1;
			for(c=1;c<=r;c++)
			{
				System.out.print(count);
				count++;
			}
			System.out.print("\n");
			spcnt--;
		}
	}
}

		                                                                                                                                                                                            
		
