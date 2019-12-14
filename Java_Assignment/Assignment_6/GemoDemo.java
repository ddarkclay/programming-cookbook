import Games.*;
class GameDemo_8
{
	public static void main(String args[])
	{
		Cricket c = new Cricket();
		Hocky h = new Hocky();
		Football f = new Football();
		System.out.print("Enter Cricker Player's Information : ");
		c.accept();
		System.out.print("\nCricker Player's Information is : ");
		c.print();
		System.out.print("\n\nEnter Hokey Player's Information : ");
		h.accept();
		System.out.print("\nHockey Player's Information is : ");
		h.print();
		System.out.print("\n\nEnter Football Player's Information : ");
		f.accept();
		System.out.print("\nCricker Player's Information is : ");
		f.print();
	}
}
