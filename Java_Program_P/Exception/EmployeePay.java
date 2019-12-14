import java.io.*;
public class EmployeePay
{
	String name;
	int basicPay;
	int da,hra,va,pf,lic,gross,net_sal;
	
	EmployeePay(String n,int b)
	{
		name = n;
		basicPay = b;
	}
	
	public void Calculate() throws PayOutOfBoundsException
	{
		/*  1 = = Use throw to create instance of type Throwable class or subclass of Throwable class or  Exception class 
		      2 == Flow of execution stops immediately after throw statement  i.e any subsequent statements are not executed 	
			  
			  Syntax =   throw new < Exception object >  */
		if (basicPay < 3000)
			throw new PayOutOfBoundsException (basicPay); 
		da = basicPay * 17/ 100;
		va = basicPay * 7/ 100;
		hra = basicPay * 25/ 100;
		gross = basicPay + hra + da + va;
		pf = basicPay * 5/ 100;
		lic = basicPay * 8/ 100;
		net_sal = gross - (pf + lic);
	}
	
	void Display()
	{
		System.out.println("Name of the Employee         ::  " + name);
		System.out.println("Basic Pay Of the Employee    ::  " + basicPay);
		
		if(basicPay > 3000)
		{
			System.out.println("DA            =    " + da);
			System.out.println("HRA           =    " + hra);
			System.out.println("VA            =    " + va);
			System.out.println("PF            =    " + pf);
			System.out.println("LIC           =    " + lic);
			System.out.println("NET  PAY      =    " + net_sal);
			
		}
	}
	
	public static void main(String args[])
	{
		EmployeePay x,y,z;
		x = new EmployeePay("Rohit" , 15000);
		y = new EmployeePay("Krishnkant" , 5000);
		z = new EmployeePay("Vinay" , 1500);
		
		try
		{
			x.Calculate();
			y.Calculate();
			z.Calculate();
		}
		catch(PayOutOfBoundsException e)
		{
			System.out.println("Usercought Exception of type Pay out of bounds :: ");
			x.Display();
			y.Display();
			z.Display();
		}
	}
}

class PayOutOfBoundsException extends Exception
{
	int basicPay;
	
	PayOutOfBoundsException(int a)
	{
		basicPay = a ;
		System.out.println("Our Organization doesnot pay Basic Pay less than 3000::");
	}
}

