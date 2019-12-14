import java.util.Scanner;
class MyDate
{	
	Scanner s = new Scanner(System.in);
	int myDay , myMonth ,myYear;
	String myStrDay , myStrMonth , myStrYear , myFullDate;
	
	MyDate(int day , int month , int year)
	{
		myDay = day;
		myMonth = month;
		myYear = year;
	}
	
	MyDate(String day , String month , String year)
	{
		myStrDay = day;
		myStrMonth = month;
		myStrYear = year;
	}
	
	MyDate(String date)
	{
		myFullDate = date;
	}
	
	void printDate()
	{
		System.out.print("Date is "+myDay+" "+" : "+myMonth+" : "+myYear);
		System.out.print("\nDate is "+myStrDay+" "+" : "+myStrMonth+" : "+myStrYear);
		System.out.print("\nDate is "+myFullDate);
	}
}

public class Date_13
{
	public static void main(String args[]) {
		MyDate c1 = new MyDate(29 , 1 , 2019);
		MyDate c2 = new MyDate("Twenty Nine", "January" , "2019"); 
		MyDate c3 = new MyDate("29-Jan-2019");
		System.out.print("First Constuctor : ");
		c1.printDate();
		System.out.print("\n\nSecond Constuctor : ");
		c2.printDate();
		System.out.print("\n\nThird Constuctor : ");
		c3.printDate();
	}
}

