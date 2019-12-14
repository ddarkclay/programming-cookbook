import java.util.*;

class DateDemo
{
	public static void main(String args[])
	{
		String s1,time = "";
		Date d1 = new Date();
		s1 = d1.toString();
		System.out.println(s1);
		time = s1.substring(11,(s1.length()-4));// give GMT time
		time = "Time  :    " +time.substring(0,8);
		System.out.println(time);
	}

}