package Games;
import java.util.Scanner;
public class Football
{
	String name,plays;
	int age;
	Scanner s = new Scanner(System.in);
	public void accept()
	{
		System.out.print("\nEnter Players Name : ");
		name = s.next();
		System.out.print("Enter Players age : ");
		age = s.nextInt();
		System.out.print("Which Sport Player play  : ");
		plays= s.next();
	}
	public void print()
	{
		System.out.print("\nPlayers Name is : "+name);
		System.out.print("\nPlayers Age is : "+age);
		System.out.print("\nPlayers Plays is : "+plays);
	}
}
