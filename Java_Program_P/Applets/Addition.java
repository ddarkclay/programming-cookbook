import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/* <applet code ="Addition.class" width="300" height ="300">
</applet> */

public class Addition extends Applet implements ActionListener
{
	TextField t1,t2,t3;
	Button b1;

	public void init()
	{
		t1=new TextField(8);
		t2=new TextField(8);
		t3=new TextField(8);
	 	b1=new Button("Add");
	    	//int n1,n2,n3;
		add(t1);
		add(t2);
		add(t3);
		add(b1);
		
		t1.setText("");
		t2.setText("");
		
		b1.addActionListener(this);
	}

	public void actionPerformed(ActionEvent e)
	{
		int n1=Integer.parseInt(t1.getText());
		int n2=Integer.parseInt(t2.getText());
		
		int n3 = (n1+n2);
		//n4=String.valueOf(n3);
		if(e.getSource() == b1)
		{
		  t3.setText(n3);
		}
	} 

}