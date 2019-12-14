import java.util.*;
// how to construct hash sets and manipulate them

public class SetDemo
{
	public static void main(String args[])
	{
		Set s = new HashSet();
		s.add("Patrick");
		s.add("Bill");
		s.add("Gene");
		s.add("Daniel");
		s.add("Claire");
		System.out.println(s);
		System.out.println(s.size());
		s.add("Rubio");
		s.add("Yang Sun");
		System.out.println(s);
		System.out.println(s.size());
	}
}