import java.awt.*;
import java.applet.Applet;
import java.awt.event.*;
/* <applet code="Prime_1" width="500" height="400"> </applet>*/
public class Prime_1 extends Applet
{
	Label l1,l2,l3,l4;
	TextField t1;
	Button b1;
	
	public void init() 
	{
		l1 = new Label("First a Number : ");
		l2 = new Label();
		l3 = new Label();
		l4 = new Label();
		t1 = new TextField();
		b1 = new Button("Check Prime");
		setLayout(null);
		l1.setBounds(100,30,150,30);
		t1.setBounds(250,30,150,30);
		b1.setBounds(200,100,100,40);
		l2.setBounds(150,200,150,30);
		l3.setBounds(150,250,150,30);
		l4.setBounds(150,300,250,30);
		add(l1);
		add(t1);
		add(b1);
		add(l2);
		add(l3);
		add(l4);
		b1.addActionListener(new MyHandler());
	}
	
	public class MyHandler implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			int no,flag=0,i,s=0;
			long fact=1;
			no = Integer.parseInt(t1.getText());
			for(i=2;i<no;i++)
			{
				if(no % i == 0)
				{
					flag=1;
					break;
				}
			}
			if(flag == 0)
			{
					l2.setText(no+" is Prime Number .");
					l3.setVisible(false);
					l4.setVisible(false);
			}
			else
			{
					l3.setVisible(true);
					l4.setVisible(true);
					l2.setText(no+" is Not Prime Number");
					for(i=1;i<no;i++)
					{
						if(no % i == 0)
							s=s+i;
					}
					if(no == s)
					{
						l3.setText(no+" is Perfect Number .");
						for(i=1;i<=no;i++)
						{
							fact = fact * i;
						}
						l4.setText("Factorial of "+no+" is : "+fact);
					}
					else
					{
						l3.setText(no+" is Not Perfect Number .");
						l4.setText("Cube of "+no+" is : "+no*no*no);
					}
			}
		}
	}
}
