import java.awt.*;
import java.applet.*;
import java.awt.event.*;

public class Two extends Applet implements ActionListener
{
	TextField tf;
	AppletContext ac;
	Button b;

	public void init()
	{
		tf = new TextField(50);
		add(tf);
		b = new Button("Submit");
		add(b);
		b.addActionListener(this);

	}

	public void actionPerformed(ActionEvent e)
	{
		ac = getAppletContext();
		One ma = (One)ac.getApplet("One");
		if(ma!=null)
		{
			if(e.getSource().equals(b));
			{
				ma.putText(tf.getText());
				tf.setText("");
			}
		}
	}
}
