import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code ="Login.class" width="600" height ="600">
</applet>
*/

public class Login extends Applet implements ActionListener
{
	Label l1=new Label("Login");
	Label l2=new Label("Password");
	TextField t1=new TextField (20);
	TextField t2=new TextField (10);
	TextField t3=new TextField (30);
	Button b1=new Button("OK");
	Button b2=new Button("Cancel");
	//Button b3=new Button("Exit");
	//Panel p1=new Panel ();
	//Panel p2=new Panel ();
	//Panel p3=new Panel ();
	//Panel p4=new Panel ();
	//Panel p5=new Panel ();
	//Panel p6=new Panel ();
	//Panel p7=new Panel ();
   // Panel p8=new Panel ();

		//setLayout(new GridLayout(4,2));
		//t2.setEchoChar('*');
		 add(l1);
		 add(t1);
		 add(l2);
		 add(t2);
		 add(b1);
		 add(b2);
		 add(t3);
		 add(b3);

		//add(p1);
		//add(p2);
		//add(p3);
		//add(p4);
		//add(p5);
		//add(p6);
		//add(p7);
		//add(p8);

		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		//pack();
		//setSize(500,500);
		//setVisible(true);
	}//end of constructor




	public void actionPerformed(ActionEvent e)
	{
		/*String pswd="nicdr";
			if(e.getSource()==b1)
			{
				if(t2.getText().equals(pswd))
				t3.setText("Successfull !!!");
			else
				t3.setText("Unuccessfull ???");
			}
			if(e.getSource()==b2)
			{
				t1.setText("");
				t2.setText("");
				t3.setText("");
			}
			if(e.getSource()==b3)
			System.exit(0);*/
	}




	public void paint(Graphics g)
	{
	  	g.drawString("Welcome to Login",20,20);
	}
}



