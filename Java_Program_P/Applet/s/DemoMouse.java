import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*
<applet code ="DemoMouse.class" width="300" height ="150">
</applet>
*/
public class DemoMouse extends Applet implements MouseListener, MouseMotionListener
{
	String msg="";
	int x=0, y=0; //coordinates  of mouse
	public void init()
		{
			addMouseListener(this);
			addMouseMotionListener(this);
		}

	//handle mouse clicked
	public void mouseClicked(MouseEvent me)
		{
			x=0;
			y=10;
			msg="Mouse Clicked";
			repaint();
		}

	public void mouseEntered(MouseEvent me)
		{
			x=0;
			y=10;
			msg="Mouse Entered";
			repaint();
		}

	public void mouseExited(MouseEvent me)
		{
			x=0;
			y=10;
			msg="Mouse exited";
			repaint();
		}

	public void mousePressed(MouseEvent me)
		{
			x=me.getX();
			y=me.getY();
			msg="Pressed";
			repaint();
		}

	public void mouseReleased(MouseEvent me)
		{
			x=me.getX();
			y=me.getY();
			msg="Released";
			repaint();
		}

	public void mouseDragged(MouseEvent me)
		{
			x=me.getX();
			y=me.getY();
			msg="*";
			showStatus("Dragging mouse at "+x+" , "+y);
			repaint();
		}

	public void mouseMoved(MouseEvent me)
		{
			showStatus("Moveing mouse at "+me.getX()+" , "+me.getY());

		}

	// Display
		public void paint(Graphics g)
		{
			g.drawString(msg,x,y);
		}
}