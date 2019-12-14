import java.util.Scanner;
class Item
{	
	Scanner s = new Scanner(System.in);
	int item_no,stock;
	String item_name;
	
	Item()
	{
		item_name = "bat";
		item_no = 101;
		stock = 1;
	}
	
	Item(int a)
	{
		stock = a;
		item_no = 101;
		item_name = "bat";
	}
	
	Item(String i_name , int i_no , int s)
	{
		item_name = i_name;
		item_no = i_no;
		stock = s;
	}
	
	void showData()
	{
		System.out.print("\nItem Name is : "+item_name);
		System.out.print("\nItem Number is : "+item_no);
		System.out.print("\nItem Stock is : "+stock);
	}
	
}

public class Item_record_4 {
	public static void main(String args[]) {
		Item o1 = new Item();
		Item o2 = new Item(5);
		Item o3 = new Item("ball",102,10);
		System.out.print("Default Constuctor :");
		o1.showData();
		System.out.print("\n\nUpdating Bat Item stocks 1 to 5 :");
		o2.showData();
		System.out.print("\n\nUpdate all values :");
		o3.showData();
	}
}

