import java.rmi.*;
 
public class HelloClient 
{
 public static void main(String args[]) 
 {
  try 
  {
    if (args.length < 0) 
    {
      System.err.println("usage: java HelloClient string …\n");
      System.exit(1);
    }
    HelloInterface hello =  (HelloInterface)Naming.lookup("//localhost/Hello");
    for (int i=0; i < args.length; ++i)
         System.out.println(hello.say(args[i]));
  } 
  catch (Exception e) 
  {
    System.out.println("Helloclient exception: " + e);
  }
 }
}