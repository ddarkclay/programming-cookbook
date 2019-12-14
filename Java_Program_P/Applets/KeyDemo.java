import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code ="KeyDemo.class" width="300" height ="150">
</applet>*/
public class KeyDemo extends Applet implements KeyListener
{
	String str =" ";
	int x=10,y=20;//output coordinates

	public void init()
	{
		addKeyListener(this);
		requestFocus(); //request input focus
	}

	public void keyPressed(KeyEvent ke)
		{
			showStatus("Key is pressed. ");
		}

	public void keyReleased(KeyEvent ke)
		{
			showStatus("Key is released. ");
		}

	public void keyTyped(KeyEvent ke)
		{
			str+=ke.getKeyChar();
			repaint();
		}

	// Display key strokes
	public void paint(Graphics g)
	{
		g.drawString(str,x,y);
	}
}