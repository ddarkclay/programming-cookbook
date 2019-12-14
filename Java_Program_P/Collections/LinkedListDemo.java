import java.util.*;

/*Create a linked list as well as adding and removing elements from the linked list.*/

class LinkedListDemo
{
	public static void main(String args[])
	{
		LinkedList l = new LinkedList();
		l.add("Michelle");
		l.add("Nicole");
		l.add("Demi");
		l.add("Greena");
		System.out.println("Contents of list are : ");
		System.out.println(l);
		System.out.println("  ");
		l.addFirst("Julia");
		l.addLast("Jennifer");
		System.out.println("New content of the list are : ");
		System.out.println(l);
		System.out.println("  ");
		l.remove(2);		
		l.remove("Jennifer");
		System.out.println("Contents of list after Deleting");
		System.out.println(l);
	}
}