import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* <applet code = "SimpleKey" width = 400 height = 300>
   </applet> */

public class SimpleKey extends Applet implements KeyListener
{
   String s = "";
   int x = 10, y = 20;

   public void init()
   {
	addKeyListener(this);
	requestFocus();
  }
  public void keyPressed(KeyEvent ke)
  {
	showStatus("Key Down");
  }
  public void keyReleased(KeyEvent ke)
  {
	showStatus("Key Up");
  }
  public void keyTyped(KeyEvent ke)
  {
	s += ke.getKeyChar();
	repaint();
  }
  public void paint(Graphics g)
  {
	g.drawString(s,x,y);
  }
}