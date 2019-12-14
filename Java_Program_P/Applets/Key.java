import java.awt.*;
import java.applet.*;
import java.awt.event.*;
/*
<applet code ="Key.class" width="300" height ="150">
</applet>
*/
public class Key extends Applet implements KeyListener
{
	String str =" ";
	int x=40, y=30; // output coordinates

	public void init()
	{
		addKeyListener(this);
		requestFocus();
	}

	public void keyPressed(KeyEvent ke)
	{
		showStatus("Key down");
	}
	public void keyReleased(KeyEvent ke)
	{
		showStatus("Key up");
	}
	public void keyTyped(KeyEvent ke)
	{
		str+=ke.getKeyChar();
		repaint();
	}

	//display keystrokes
	public void paint(Graphics g)
	{
		g.drawString(str,x,y);
	}
}