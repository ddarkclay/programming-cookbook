import java.util.Scanner;
public class star_8 {
	
	public static void main (String[] args) {  
		Scanner obj = new Scanner(System.in);
		int r,i,j,sp,temp=1;
		System.out.print("Enter How many lines you want to show : ");
		r=obj.nextInt();
		System.out.print("\n\n");
		for(i=0;i<r;i++)
		{
			for(sp=1;sp<=r-i;sp++)
				System.out.print(" ");
			for(j=0;j<=i;j++)
			{
				if(j==0 || i==0)
					temp=1;
				else
					temp=temp*(i-j+1)/j;
				System.out.print(" "+temp);
			}
			System.out.print("\n");
		}
	}
}

		                                                                                                                                                                                            
		
