class TwoDArr
{
 public static void main(String args[])
 {
   int arr[][] = new int[3][4];
    int i,j,k=0;

   for(i=0;i<3;i++)
   {
      for(j=0;j<4;j++)
      {
          arr[i][j] = k;
	k++;
      }
   }   
   for(i=0;i<3;i++)
   {
      for(j=0;j<4;j++)
        {
          System.out.print(" "+arr[i][j]+" ");
        }
      System.out.println();
   }
 }
}