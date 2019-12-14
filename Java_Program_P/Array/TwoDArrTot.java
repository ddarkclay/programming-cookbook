class TwoDArrTot
{
 public static void main(String args[])
 {
   int arr[][] = new int[3][3];
    int i,j,k=0,sum = 0;

   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
          arr[i][j] = k;
	k++;
      }
   }   
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
        {
          System.out.print(" "+arr[i][j]+" ");
          sum = sum+arr[i][j];
        }
      System.out.println(); 
   } 
 System.out.println("\n"+sum);
 }
}