// accept vaues from user....
import java.util.Scanner;

public class Demo
{
public static void main(String args[])
{
  String name;
  int age;

  Scanner in = new Scanner(System.in);
  name =  in.nextLine();
  age = in.nextInt();
  
  in.close();

  System.out.println("Name: "+name);
  System.out.println("Age: "+age);
}
}