import java.rmi.*;
import java.rmi.server.*;

public class HelloServer 
{
 
 public static void main(String args[]) 
 {

  if (System.getSecurityManager() == null)
      
    System.setSecurityManager(new RMISecurityManager());
      
      try 
      {
   
        // instantiate the service with the standard message & tell registry
        Naming.rebind("Hello", new Hello("Hello, world!"));
        System.out.println("Server is running...");
      } 
      catch(Exception e) 
      {
        System.out.println("Hello Server failed: " + e);
      }
  }
}