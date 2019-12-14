import java.util.*;
public class VectorDemo
{
	public static void main(String args[])
	{
		Vector v = new Vector();
		v.addElement("Jade");
		v.addElement("Topaz");
		v.addElement("Turquoise");
		v.addElement("Emerald");

		System.out.println("Size : " + v.size());
		System.out.println("Vector ");

		for(int i =0; i<v.size();i++)
		{
			System.out.print(v.elementAt(i)+",");
		}
		System.out.println();		

		v.insertElementAt("Precious Stones : ",0);
		v.insertElementAt("Opal",4);
		
		System.out.println("Size : " + v.size());
		System.out.println("Vector ");

		for(int i =0; i<v.size();i++)
		{
			System.out.print(v.elementAt(i)+",");
		}
		v.removeElement("Topaz");

		System.out.println(" ");
		System.out.println(" ");

		System.out.println("Size : "+v.size());
		System.out.println("Vector ");

		for(int i =0; i<v.size();i++)
		{
			System.out.print(v.elementAt(i)+",");
		}

	}
}