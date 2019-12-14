import java.awt.*;
import java.applet.*;
/*
<applet code ="LifeCycleDemo.class" width="300" height ="150">
</applet>
*/
public class LifeCycleDemo extends Applet
{
	String str =" ";

	public void init()
	{
		setBackground(Color.red);
		str+= "init";
	}

	public void start()
		{
			str+= "start";
		}

	public void stop()
		{
			str+= "stop";
		}

	public void destroy()
		{
			System.out.println("destroy");
		}

	public void paint(Graphics g)
	{
		g.drawString(str,50,50);
	}
}