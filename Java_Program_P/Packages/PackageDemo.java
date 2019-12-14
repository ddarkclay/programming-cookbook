import packmaths.*;

public class PackageDemo
{
  public static void main(String args[])
  {
      Multiplication d = new Multiplication(15,3);
      Div s = new Div(6,2);
      double r;
	r = d.makeMultiplication();
	System.out.println(r);
	r = s.makeDiv();
	System.out.println((int)r);
  }
}