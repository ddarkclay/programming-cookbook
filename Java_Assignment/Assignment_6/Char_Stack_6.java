interface CharStack
{
	void push(char Item);
	char pop();
}

class FixedStack implements CharStack
{
	private char stck[];
	private int tos;
	FixedStack(int size)
	{
		stck = new char[size];
		tos = -1;
	}
	public void push(char item)
	{
		if(tos == stck.length-1)
			System.out.print("\nStack is Full ");
		else 
			stck[++tos] = item;
	}
	public char pop()
	{
		if(tos<0)
		{
			System.out.print("Stack is Underflow ");
			return 0;
		}
		else
		{
			return stck[tos--];
		}
	}
}

class Char_Stack_6
{
	public static void main(String args[])
	{
		FixedStack s1 = new FixedStack(5);
		int i;
		char ch='A';
		for(i=0;i<5;i++)
		{
			s1.push(ch);
			System.out.print(ch+"\n");
			ch++;
		}
		System.out.print("Stack in S1 : \n");
		for(i=0;i<5;i++)
			System.out.print(s1.pop()+"\n");
	}
}
