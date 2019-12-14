class pattern
{
  public static void main(String args[])
  {
    int ck=0,c=2;
    while(c > 0)
    {
      if(ck==0)
      {
        for(int i=1,r=5;i<=5;i++,r--)
	{
	  for(int j=1;i<=r;j++)
	  {
	    System.out.print(j);
	  }
	  System.out.println();
	}
        ck++;
      }// if close
      else
      {
        for(int i=2;i<=5;i++)
	{
	  for(int j=1;j<=i;j++)
	  {
	    System.out.print(j);
	  }
	  System.out.println();
	}
	c--;
      }//else close
    }//while close
  }
}