import java.util.Scanner;
class Animal
{
	void eat(String food)
	{
		System.out.print("All Animals are eat "+food);
	}
	void sleep(float s)
	{
		System.out.print("All Animals are sleep "+s+" hours a Day .");
	}
}

class Dog extends Animal
{
	void eat(String food)
	{
		System.out.print("All Dogs are eat "+food);
	}
	void sleep(float s)
	{
		System.out.print("\nAll Dogs are sleep "+s+" hours a Day .");
	}
}

class Bird extends Animal
{
	void eat(String food)
	{
		System.out.print("All Birds are eat "+food);
	}
	void sleep(float s)
	{
		System.out.print("\nAll Birds are sleep "+s+" hours a Day .");
	}
}

class Animal_4
{
	public static void main(String args[])
	{
		Dog d = new Dog();
		Bird b = new Bird();
		System.out.print("Information about Dogs : \n");
		d.eat("Chapati");
		d.sleep(7.5f);
		System.out.print("\n\nInformation about Birds : \n");
		b.eat("Grains");
		b.sleep(3.5f);
	}
}
