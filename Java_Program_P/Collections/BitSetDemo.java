import java.util.*;
public class BitSetDemo
{
	public static void main(String args[])
	{
		BitSet b1 = new BitSet(20);
		b1.set(1);
		b1.set(4);

		BitSet b2 = new BitSet(20);
		b2.set(4);
		b2.set(5);

		System.out.println("Bits 1 =  " + b1.toString());
		System.out.println("Bits 2 =  " + b2.toString());

		if(b1.equals(b2))
			System.out.println("Bits1 == Bits2\r\n");
		else
			System.out.println("Bits2 == Bits1\r\n");
	}
}