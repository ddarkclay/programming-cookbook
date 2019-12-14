//Demo of Scanner class

import java.util.Scanner;

class UserIn
{
  public static void main(String args[])
  {
	String name;
	int age;

	Scanner i = new Scanner(System.in);

	System.out.println("Name: ");
	name = i.nextLine();
	System.out.println("Age: ");
	age = i.nextInt();
	
	i.close();

	System.out.println("Name: "+name);
	System.out.println("Age: "+age);
  }
}