import java.awt.*;
import java.awt.event.*;

public class Increase_Circle_7 extends Frame
{
		Button btenlarge = new Button("Enlarge");
		Button btshrink = new Button("Shrink");
		CPanel canvas=new CPanel();
		public Increase_Circle_7()
		{
			Panel p = new Panel();
			p.add(btenlarge);
			p.add(btshrink);

			this.add(canvas, BorderLayout.CENTER);
			this.add(p, BorderLayout.SOUTH);

			btenlarge.addActionListener(new EnlargeListener());
			btshrink.addActionListener(new ShrinkListener());
		}

		public static void main(String[] args) 
		{
			Frame f = new Increase_Circle_7();
			f.setTitle("ControlCircle1");
			f.setSize(500, 500);
			f.setVisible(true);
		}

		class EnlargeListener implements ActionListener 
		{
			public void actionPerformed(ActionEvent e) 
			{
				canvas.enlarge();
			}
		}

		class ShrinkListener implements ActionListener 
		{
			public void actionPerformed(ActionEvent e) {
			canvas.shrink();
		}
	}

	class CPanel extends Panel
	{
		private int radius =5;

		public void enlarge() 
		{
			radius++;
			repaint();
		}

		public void shrink() 
		{
			radius--;
			repaint();
		}

		public void paint(Graphics g) 
		{
			super.paint(g);
			g.drawOval(getWidth()/2 - radius, getHeight()/2 - radius,2*radius,2*radius);
		}
	}
}
