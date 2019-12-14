package tmv.tests;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class ImagePanel extends JPanel
{
	String currImgName="traffic_light_red.png";
	
	ImagePanel()
	{
		setBackground(Color.WHITE);
	}
	
	public void setCurrentImage(String imgName)
	{
		this.currImgName = imgName;
	}
	public void paintComponent (Graphics g)
	{
		String imageName = System.getProperty("user.dir") + "\\images\\" + currImgName;
		Image img = Toolkit.getDefaultToolkit().getImage(imageName);	
	    g.drawImage(img,70,10, this);
	}
	
}
public class TrafficSignalV2 extends JFrame implements ActionListener
{

	boolean       stop = false;
	ImageSwitcher is = null;
	int           imgCnt = 0;
	ImagePanel    image = new ImagePanel();
	JTextField     time;
	
	static final int DEFAULT_INTERVAL = 1000;

	TrafficSignalV2()
	{
		super("Traffic Signal V2");

		setSize(300,300);
		setResizable(false);
		setBackground(Color.WHITE);
		is = new ImageSwitcher(this, imgCnt, DEFAULT_INTERVAL);
		is.start();

		Container c = getContentPane();
		c.setLayout(new GridLayout(2,1, 100, 0));
		c.add(image);
		
		JPanel jp = new JPanel();
		JButton stop = new JButton("Stop");
		stop.setBounds(0, 0, 50, 20);
		 time = new JTextField(25);
		
		JButton    setInt = new JButton("Set Interval(ms)");
		setInt.setBounds(0, 70, 50, 20);
		
		jp.add(stop);
		jp.add(time);
		jp.add(setInt);
		c.add(jp);
		setVisible(true);
		
		addWindowListener(new WindowAdapter()
		{
			public void windowClosing(WindowEvent we)
			{
				setStop (true);
				System.exit(0);
			}
			
		});
		
		stop.addActionListener(this);
		setInt.addActionListener(this);
		
	}
	
	boolean isStopped() {return stop;}
	void    setStop(boolean stop) {this.stop = stop;}
	void    setCurrentImage (String imgName) {image.setCurrentImage(imgName);}
	
	/*public void paint (Graphics g)
	{
		image.repaint();
	}*/


	public static void main (String args[])
	{
		new TrafficSignalV2();
	}
	
	public void actionPerformed(ActionEvent ae)
	{
		if (ae.getActionCommand().compareTo("Stop") == 0)
		{
			JButton b = (JButton) ae.getSource();
			b.setText("Start");
			b.setActionCommand("Start");
			setStop (true);
			imgCnt = is.getImgCnt();
		}
		else if (ae.getActionCommand().compareTo("Start") == 0)
		{
			JButton b = (JButton) ae.getSource();
			b.setText("Stop");
			b.setActionCommand("Stop");
			setStop (false);
			
			imgCnt = (imgCnt < 2 ) ? imgCnt + 1 : 0;
			is = new  ImageSwitcher(this, imgCnt, DEFAULT_INTERVAL);
			is.start();
		}
		else
		{
			int interval;
			try
			{
				 interval = Integer.parseInt(time.getText());
			}
			catch (NumberFormatException  ne)
			{
				interval = DEFAULT_INTERVAL;
			}
			
			is.setInerval(interval);
		}
		
		
	}

}

class ImageSwitcher extends Thread
{
	private TrafficSignalV2 ts;
	int     ImgCnt = 0;
	int     interval = 0;
	String imageNames[] = {
							"traffic_light_yellow.png", 
			                "traffic_light_green.png", 
			                "traffic_light_red.png"
			               };
	
	ImageSwitcher(TrafficSignalV2 ts, int ImgCnt, int interval)
	{
		this.ts = ts;
		this.ImgCnt = ImgCnt;
		this.interval = interval;
	}
	
	public void setInerval (int interval)
	{
		this.interval  = interval;
	}
	
	public void run ()
	{
		while (!ts.isStopped())
		{
			try
			{
				Thread.sleep(interval);
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
	public int getImgCnt() {return ImgCnt;}
}
