import java.applet.Applet;
import java.awt.Graphics;
import java.awt.event.KeyListener;
import java.awt.event.KeyEvent;
import java.awt.*;

/*<applet code="Key_Draw_9" width="500" height="500"> https://www.youtube.com/watch?v=pTJLwmAVHxE </applet>*/
public class Key_Draw_9 extends Applet implements KeyListener
{
	Label l;
	int x1=0,y1=0,x2=0,y2=0;
    char ch;
  public void init()            // link the KeyListener with Applet
  {
	  l = new Label();
	  setLayout(null);
	  l.setBounds(30,50,100,30);
    addKeyListener(this);
  }
  			        // override all the 3 abstract methods of KeyListener interface 
  public void keyPressed(KeyEvent e)   {   }
  public void keyReleased(KeyEvent e)  {   }
  public void keyTyped(KeyEvent e)  
  {   
    ch = e.getKeyChar();
    if(ch == 'l' || ch == 'L')
		{
			x1 = this.getX()-10;
			y1 = this.getY();
		}
	   else if(ch == 'r' || ch == 'R')
		{
			x1 = this.getX()+10;
			y1 = this.getY();
		}
	   else if(ch == 't' || ch == 'T')
		{
			x1 = this.getX();
			y1 = this.getY()-10;
		}
	   else if(ch == 'd' || ch == 'D')
		{
			x1 = this.getX()+10;
			y1 = this.getY();
		}
	l.setBounds(x1,x2,100,30);
    repaint();
  }    

  public void paint(Graphics g)
  {
    g.drawLine(x1,y1,x2,y2);
    showStatus("You typed " + ch + " character");
  }
}
