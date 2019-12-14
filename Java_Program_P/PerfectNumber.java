public class PerfectNumber
{
  public static void main(String[]args)
  {
    int sum=0, x=0;
    
    for(int num=1;num<500;num++)
    {
      for(int i=1;i<num;i++)
      {
        x=num%i;
        if(x==0)
        sum=sum+i;
      }
      if(sum==num)
      {
        System.out.println("Perfect Number is: "+num);
        System.out.println("Factors are: ");
   
        for(int i=1;i<num;i++)
        {
           x=num%i;
           if(x==0)
               System.out.println(i);
        }
     }
     sum=0;
  }
}
}