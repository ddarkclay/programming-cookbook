import java.util.Scanner;
class Bird
{	
	Scanner s = new Scanner(System.in);
	Double size;
	String bird_name,bird_color,feathers;
	
	Bird()
	{
		bird_name = "Parrot";
		bird_color = "Green";
		feathers = "Relegent";
		size = 1.2;
	}
	
	Bird(String b_name)
	{
		bird_name = b_name;
		bird_color = "Rainbow";
		feathers = "Smmoth";
		size = 1.5;
	}
	
	Bird(String b_name,String b_color,String b_feathers,Double b_size)
	{
		bird_name = b_name;
		bird_color = b_color;
		feathers = b_feathers;
		size = b_size;
	}
	
	void showData()
	{
		System.out.print("\n\nBird Name is : "+bird_name);
		System.out.print("\n"+bird_name+" Color is : "+bird_color);
		System.out.print("\n"+bird_name+" Feather is : "+feathers);
		System.out.print("\n"+bird_name+" Size is : "+size);
	}
	
}

public class Bird_Info_5 {
	public static void main(String args[]) {
		Bird o1 = new Bird();
		Bird o2 = new Bird("Kingfisher");
		Bird o3 = new Bird("Swan","White","Dull",2.0);
		System.out.print("Default Constuctor :");
		o1.showData();
		System.out.print("\n\nNext Bird Information :");
		o2.showData();
		System.out.print("\n\nLast Bird Information :");
		o3.showData();
	}
}

