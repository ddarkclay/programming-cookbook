interface Squazzable
{
	public void color(String col);
}

class Fruit 
{
	String name;
	Fruit(String nm)
	{
		name = nm;
	}
	void canSmell(String is)
	{
		System.out.print(is+" This Fruit Can Smell .");
	}
}

class Orange extends Fruit implements Squazzable
{
	String name;
	Orange(String nm)
	{
		super("Apple");
		name = nm;
	}
	void canSmell(String is)
	{
		System.out.print(is+" "+name+" Fruit Can Smell .\n");
	}
	public void color(String col)
	{
		System.out.print(name+" of Color is "+col);
	}
}

class Fruit_Orange_7
{
	public static void main(String args[])
	{
		Fruit f = new Fruit("apple");
		Orange o = new Orange("Orange");
		o.canSmell("Yes");
		o.color("Orange");
	}
}
