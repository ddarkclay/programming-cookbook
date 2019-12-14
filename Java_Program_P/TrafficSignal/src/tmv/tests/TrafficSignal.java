package tmv.tests;

import java.awt.*;
import java.awt.event.*;

public class TrafficSignal extends Frame 
{
	String currImgName="traffic_light_red.png";
	boolean stop = false;
	ImageSwitcher is = null;

	TrafficSignal()
	{
		super("Traffic Signal");
		setSize(300,300);
		setVisible(true);
		setResizable(false);
		is = new ImageSwitcher(this);
		is.start(); 
		
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent we)
			{
				setStop (true);
				System.exit(0);
			}
			
		});
		
	}
	
	boolean isStopped() {return stop;}
	void    setStop(boolean stop) {this.stop = stop;}
	void    setCurrentImage (String imgName) {currImgName = imgName;}

	public void paint (Graphics g)
	{
		// Images folder should be from where you run the application. so images and folder tmv will 
		// be at same place.
		String imageName = System.getProperty("user.dir") + "\\images\\" + currImgName;
		Image img = Toolkit.getDefaultToolkit().getImage(imageName);	
	    g.drawImage(img, getInsets().left + 85, getInsets().top + 50, this);
	}
	public static void main (String args[])
	{
		new TrafficSignal();
	}

}

class ImageSwitcher extends Thread
{
	private TrafficSignal ts;
	int     ImgCnt = 0;
	String imageNames[] = {
							"traffic_light_yellow.png", 
			                "traffic_light_green.png", 
			                "traffic_light_red.png"
			               };
	
	ImageSwitcher(TrafficSignal ts)
	{
		this.ts = ts;
	}
	
	public void run ()
	{
		while (!ts.isStopped())
		{
			try
			{
				Thread.sleep(1000);
				ts.setCurrentImage(imageNames[ImgCnt++]);
				ts.repaint();
				
				if (ImgCnt > 2)
					ImgCnt = 0;
				
			}
			catch (Exception ie)
			{
				
			}
		}
		
	}
}
