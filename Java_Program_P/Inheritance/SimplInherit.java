//Simple example of inheritance

class A // SuperClass
{
   int i, j;

   void showij()
   {
       System.out.println("i and j : " +i+ "  " + j);
   }
}

// Create subclass
class B extends A
{
  int k;
  
   void showk()
   {
       System.out.println("k : " +k);       
   }
   void sum()
   {
       System.out.println("i+j+k  : " +(i + j+k));
    }
}

class SimplInherit
{
   public static void main(String args[])
   {
         A supob = new A();
         B subob = new B();

         supob.i = 10;
         supob.j = 15;
     
         System.out.println("Contents of supob:  ");
         supob.showij();    
         System.out.println();

//subclass has access to all public members of its superclass.
         subob.i = 7;
         subob.j = 8;
         subob.k = 9;
         System.out.println(" Contents of subob : ");
         subob.showij();
         subob.showk();
         System.out.println();

        System.out.println(" sum of i, j and k in subob : ");
        subob.sum();
   }
}