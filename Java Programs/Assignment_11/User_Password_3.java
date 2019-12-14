import java.awt.*;
import java.applet.Applet;
import java.awt.event.*;
/* <applet code="User_Password_3" width="500" height="300"> </applet>*/
public class User_Password_3 extends Applet
{
	Label l1,l2,l3;
	TextField t1,t2;
	Button b1;
	
	public void init() 
	{
		l1 = new Label("First UserName : ");
		l2 = new Label("Enter Password : ");
		t1 = new TextField();
		t2 = new TextField();
		b1 = new Button("Check");
		l3 = new Label();
		setLayout(null);
		l1.setBounds(100,30,150,30);
		t1.setBounds(250,30,150,30);
		l2.setBounds(100,80,150,30);
		t2.setBounds(250,80,150,30);
		b1.setBounds(200,150,80,40);
		l3.setBounds(150,200,400,40);
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
			String str1 = t1.getText();
			String str2 = t2.getText();
            if(str1.equals("user") && str2.equals("pass"))
			 {
			   l3.setText("VALID UserName And Password");
			 }
		    else
			 {
			   l3.setText("INVALID, UserName And Password");
			 }
		}
	}
}
