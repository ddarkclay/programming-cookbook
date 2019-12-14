import java.awt.*;
import java.applet.Applet;
import java.awt.event.*;
/* <applet code="Online_Order_5" width="500" height="500"> </applet>*/
public class Online_Order_5 extends Applet
{
	Label l1,l2,l3,l4,l5;
	TextField t1,t2,t3,t4;
	Button b1;
	Font f1,f2;
	public void init() 
	{
		l1 = new Label("Item Number : ");
		l2 = new Label("Item Name : ");
		l3 = new Label("Rate Per Item : ");
		l4 = new Label("Quantity of Item : ");
		l5 = new Label("Result");
		t1 = new TextField();
		t2 = new TextField();
		t3 = new TextField();
		t4 = new TextField();
		b1 = new Button("Calculate");
		l5 = new Label();
		setLayout(null);
		l1.setBounds(100,30,150,30);
		t1.setBounds(250,30,150,30);
		l2.setBounds(100,80,150,30);
		t2.setBounds(250,80,150,30);
		l3.setBounds(100,130,150,30);
		t3.setBounds(250,130,150,30);
		l4.setBounds(100,180,150,30);
		t4.setBounds(250,180,150,30);
		b1.setBounds(200,250,80,40);
		l5.setBounds(100,350,250,40);
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(l3);
		add(t3);
		add(l4);
		add(t4);
		add(b1);
		add(l5);
		b1.addActionListener(new MyHandler());
	}
	
	public class MyHandler implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			int a,b,total;
			a = Integer.parseInt(t3.getText());
			b = Integer.parseInt(t4.getText());
			total = a*b;
			l5.setText("Total Amount Paid By User is "+total+" For "+t2.getText()+" Item .");
		}
	}
}
