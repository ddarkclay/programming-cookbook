package myPack;

class Balance
{
  String name;
  double bal;

  Balance(String n, double b)
  {
     name = n;
     bal = b;
  }

  void show()
  {
    if(bal < 0)
	System.out.println("-->");
	System.out.println(name + " :  $  " + bal);
  }
}

class AccBal
{
  public static void main(String args[])
  {
    Balance current[] = new Balance[3];

    current[0] = new Balance("A. K. Krishnan", 231.22);
    current[1] = new Balance("J. Willsons", 456.02);
    current[2] = new Balance("Y. R. Rathi", -12.33);

     for( int i=0; i<3; i++)
	current[i].show();
  }
}