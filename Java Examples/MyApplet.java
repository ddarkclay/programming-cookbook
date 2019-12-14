import java.awt.*;
import java.applet.Applet;
import java.awt.event.*;
/* <applet code="MyApplet" width="500" height="300"> </applet>*/
public class MyApplet extends Applet
{
	Label l1,l2,l3;
	TextField t1,t2;
	Button b1;
	
	public void init() 
	{
		l1 = new Label("First Number : ");
		l2 = new Label("Second Number : ");
		t1 = new TextField();
		t2 = new TextField();
		b1 = new Button("Add");
		l3 = new Label();
		setLayout(null);
		l1.setBounds(100,30,150,30);
		t1.setBounds(250,30,150,30);
		l2.setBounds(100,80,150,30);
		t2.setBounds(250,80,150,30);
		b1.setBounds(200,150,80,40);
		l3.setBounds(200,200,200,40);
		add(l1);
		add(t1);
		add(l2);
		add(t2);
		add(b1);
		add(l3);
		b1.addActionListener(new MyHandler());
	}
	
	public class MyHandler implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			int a,b,s;
			a = Integer.parseInt(t1.getText());
			b = Integer.parseInt(t2.getText());
			s = a+b;
			l3.setText("Sum is "+s);
		}
	}
}
