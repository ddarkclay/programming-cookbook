import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* <applet code = "Draw_Line_3" width = 400 height = 300>
   </applet> */

public class Draw_Line_3 extends Applet implements MouseListener
{
   int x1,y1,x2,y2;

   public void init()
   {
		setLayout(new FlowLayout());
		setBounds(100,100,300,300);
		addMouseListener(this);
		this.setVisible(true);
   }
   public void mouseClicked(MouseEvent e)
	{    }
   public void mousePressed(MouseEvent e)
   {
		x1 = e.getX();
		y1 = e.getY();
   }
   public void mouseMove(MouseEvent e)
	{   }
   public void mouseReleased(MouseEvent e)
   {
		x2 = e.getX();
		y2 = e.getY();
		repaint();
   }
   public void mouseEntered(MouseEvent e)
	{   }
   public void mouseExited(MouseEvent e)
	{    }
   public void paint(Graphics g)
   {
		g.drawLine(x1,y1,x2,y2);
		x2 = 0;
		y2 = 0;
   }  
}
