import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* <applet code = "Painting" width = 400 height = 300>
   </applet> */

public class Painting extends Applet implements ActionListener,MouseListener,MouseMotionListener
{
   Button b1 = new Button("Draw Rectangle");
   int i=0,x1,x2,x3,x4;

   public void init()
   {
	BorderLayout bb = new BorderLayout();
	setLayout(bb);
	add("South",b1);
	b1.addActionListener(this);
	addMouseListener(this);
	addMouseMotionListener(this);
	this.setVisible(true);
   }
   public void mouseClicked(MouseEvent e) 
   {}
   public void mousePressed(MouseEvent e)
   {
	x1 = e.getX();
	x2 = e.getY();
	repaint();
   }
   public void mouseMoved(MouseEvent e)
   {
	x3 = e.getX();
	x4 = e.getY();
	showStatus("Moveing mouse at "+e.getX()+" , "+e.getY());	
   }
   public void mouseReleased(MouseEvent e)
   {
	x3 = e.getX();
	x4 = e.getY();
	repaint();
   }
   public void mouseEntered(MouseEvent e)
   {   }
   public void mouseExited(MouseEvent e)
   {   }
   public void mouseDragged(MouseEvent e)
   {  
	x3 = e.getX();
	x4 = e.getY();
	showStatus("Dragging mouse at "+e.getX()+" , "+e.getY());
	repaint();
   }

   public void actionPerformed(ActionEvent e)
   {
	String s = e.getActionCommand();
	if("Draw Rectangle".equals(s));
	{
	    i = 1;
	    repaint();
	}
   }
   public void paint(Graphics g)
   {
	if(i == 1)
	{
		g.drawRect(x1,x2, (x3-x1), (x4-x2));
		x3 = x4 = 0;
	}
   }  
}