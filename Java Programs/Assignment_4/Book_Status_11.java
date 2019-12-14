import java.util.Scanner;
class Book
{	
	Scanner s = new Scanner(System.in);
	int book_no;
	boolean book_status;
	String book_title,book_author;
	
	Book()
	{
		book_title = "C programming";
		book_no = 101;
		book_author = "Y Kanetkar";
		book_status = true;
	}
	
	Book(String title , int no , String author)
	{
		book_title = title;
		book_no = no;
		book_author = author;
		book_status = true;
	}
	
	Book(String title , int no , String author , boolean status)
	{
		book_title = title;
		book_no = no;
		book_author = author;
		book_status = status;
		
	}
	
	void check_availability()
	{
		System.out.print("\nBook Title is : "+book_title);
		System.out.print("\nBook Number is : "+book_no);
		System.out.print("\nBook_author is : "+book_author);
		if(book_status == true)
			System.out.print("\nBook Availability Status is true ie Book is Available");
		else
			System.out.print("\nBook Availability Status is false ie Book is not Available");
	}
	
}

public class Book_Status_11 {
	public static void main(String args[]) {
		Book o1 = new Book();
		Book o2 = new Book("C++ knowlege",102,"Arun Shriwastav");
		Book o3 = new Book("Java to Qualify",103,"Jonathan James",false);
		System.out.print("Default Constuctor :");
		o1.check_availability();
		System.out.print("\n\nNext Book :");
		o2.check_availability();
		System.out.print("\n\nLast Book :");
		o3.check_availability();
	}
}

