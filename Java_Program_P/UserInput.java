// accept values from user....
import java.io.*;

class UserInput
{
public static void main(String args[]) throws Exception
{
  String name;
  
  BufferedReader r = new BufferedReader(new InputStreamReader(System.in));

  System.out.println("What is your Name? ");

  name = r.readLine();
  System.out.println("Name : "+name);
}
}