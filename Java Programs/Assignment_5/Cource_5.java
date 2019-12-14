import java.util.Scanner;
class Cource
{
	int cource_id;
	String cource_name,pass;
	
	void Eligibility(String p)
	{
		pass = p;
		System.out.print("Cource Id is : "+cource_id);
		System.out.print("Cource name is : "+cource_name);
		System.out.print("Cource Eligibily is :  "+pass);
	}
}

class BCA_Cource extends Cource
{
	int cource_id;
	String cource_name,pass;
	BCA_Cource(int c_id , String c_name)
	{
		cource_id = c_id;
		cource_name = c_name;
	}
	
	void Eligibility(String p)
	{
		pass = p;
		System.out.print("Cource Id is : "+cource_id);
		System.out.print("\nCource name is : "+cource_name);
		System.out.print("\nCource Eligibily is :  "+pass);
	}
}

class Cource_5
{
	public static void main(String args[])
	{
		Cource c = new Cource();
		BCA_Cource b = new BCA_Cource(102,"BCA");
		b.Eligibility("Twelveth");
	}
}
