import java.io.*;
class Pascal1
{
   public static void main(String[] args) throws IOException
   {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      System.out.print("\nEnter the number of rows : ");

      int r = Integer.parseInt(br.readLine());
		
      for(int i=0;i<r;i++)
      {
	for(int k=r;k>i;k--)
	{
	   System.out.print(" ");
	}
             int number = 1;
	for(int j=0;j<=i;j++)
	{

	    System.out.print(number+" ");
                 number = number * (i - j) / (j + 1);		 
	}
	System.out.println();
      }
  }
}