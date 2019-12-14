import java.awt.*;
import java.applet.Applet;
import java.awt.event.*;
/* <applet code="Scrolling_Text_2" width="500" height="400"> </applet>*/

	public class Scrolling_Text_2 extends Applet implements Runnable 
	{ 
		private String display; 
		private int x, y, flag;
		Thread t;
		
		public void init() 
		{
			display = "Hello";
			x = 100;
			y = 100;
			flag = 1;
			t = new Thread(this, "MyThread");
			t.start();
		}
		
		public void update()
		{
			x = x + 10 * flag;
			if (x > 300)
				flag = -1;
			if (x < 100)
				flag = 1;
		} 
		public void run()
		{
			while (true)
			{ 
				repaint();
				update();
				try 
				{ 
					Thread.sleep(100); 
				}
				catch (InterruptedException ie) 
				{
					System.out.println(ie); 
				} 
			}
		} 
	
		public void paint(Graphics g) 
		{ 
			Font f = new Font("Georgia", Font.ITALIC, 20);
			g.setFont(f);
			g.drawString(display, x, y); 
		} 
}
