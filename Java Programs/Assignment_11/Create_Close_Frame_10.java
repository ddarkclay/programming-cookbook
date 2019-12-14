import java.awt.*;
import java.awt.event.*;
import java.applet.*;
/*<applet code="Create_Close_Frame_10" width=500 height=500> </applet> */

class SampleFrame extends Frame 
{
	Button b1,b2;
	SampleFrame(String title) 
	{
		super(title);
		b1 = new Button("New");
		b2 = new Button("Close All");
		setLayout(null);
		b1.setBounds(150,50,100,30);
		b2.setBounds(150,100,100,30);
		add(b1);
		add(b2);
		MyWindowAdapter adapter = new MyWindowAdapter(this);
		addWindowListener(adapter);
	}
	public void paint(Graphics g) 
	{
		g.drawString("This is in frame window", 10, 40);
	}
}

class MyWindowAdapter extends WindowAdapter 
{
	SampleFrame sampleFrame;
	public MyWindowAdapter(SampleFrame sampleFrame) 
	{
		this.sampleFrame = sampleFrame;
	}
	public void windowClosing(WindowEvent we) 
	{
		sampleFrame.setVisible(false);
	}
}

public class Create_Close_Frame_10 extends Applet 
{
	Frame f;
	Button b1,b2;
	public void init() 
	{
		f = new SampleFrame("A Frame Window");
		b1 = new Button("New");
		b2 = new Button("Close All");
		setLayout(null);
		b1.setBounds(150,50,100,30);
		b2.setBounds(150,100,100,30);
		add(b1);
		add(b2);
		f.setSize(350, 350);
		f.setVisible(true);	
	}
	public void start() 
	{
		f.setVisible(true);
	}
	public void stop() 
	{
		f.setVisible(false);
	}
	public void paint(Graphics g) 
	{
		g.drawString("This is in applet window", 15, 30);
	}
}
