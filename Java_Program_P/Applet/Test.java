import java.awt.*;
import java.awt.event.*;
import java.applet.*;

/* <applet code = "Test" width = 400 height = 300>
   </applet> */

public class Test extends Applet implements ActionListener
{
   Label l1,l2;
   TextField tf1,tf2;
   Button btnResult;
   public void init()
   {
	l1 = new Label("Enter a number ");
	l2 = new Label("Its Square is ");
	tf1 = new TextField(5);
	tf2 = new TextField(5);
	btnResult = new Button("Calculate");
	btnResult.addActionListener(this);
	add(l1);
	add(tf1);
	add(l2);
	tf2.setEditable(false);
	add(tf2);
	add(btnResult);
   }
   public void actionPerformed(ActionEvent ae)
   {
	if(ae.getSource() == btnResult)
	{
		int num = Integer.parseInt(tf1.getText());
		int sqr = num*num;
		tf2.setText(String.valueOf(sqr));
	}
   }
}