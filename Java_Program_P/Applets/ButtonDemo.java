import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code ="ButtonDemo.class" width="600" height ="600">
</applet>
*/

public class ButtonDemo extends Applet implements ActionListener
{
	String msg ="";
	Button y,n,m;


	public void init()
	{
	    y=new Button("YES");
	    n=new Button("NO");
	    m=new Button("MAYBE");

	         add(y);
		 add(n);
		 add(m);

		y.addActionListener(this);
		n.addActionListener(this);
		m.addActionListener(this);
	}

	public void actionPerformed(ActionEvent e)
	{
		String str = e.getActionCommand();
		if(str.equals("YES"))
		{
			msg ="U Pressed YES.";
		}
		else if(str.equals("NO"))
		{
			msg ="U Pressed NO.";
		}
		else
		{
			msg ="U Pressed MAYBE.";
		}
	repaint();
    }

	public void paint(Graphics g)
	{
	  	g.drawString(msg,40,20);
	}
}