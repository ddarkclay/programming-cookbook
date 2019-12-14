import java.util.*;
// how to create hash table
public class HashtDemo
{
	public static void main(String args[])
	{
		Hashtable students = new Hashtable();
		Enumeration names;
		String s;

		students.put("Toney",new String("2008"));
		students.put("Cathy",new String("2007"));
		students.put("Michael",new String("2009"));
		students.put("Patrick",new String("2007"));
		students.put("Mark",new String("2007")); 
		names = students.keys();
		while(names.hasMoreElements())
		{
			s = (String)names.nextElement();
			System.out.println(s+" is in batch "+students.get(s));
			System.out.println("");
		}
	}
}