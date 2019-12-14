import java.awt.*;
import java.applet.*;

public class Firstapplet extends Applet
{
   String s;
   public void init()
   {
	s = "Java is interesting..!";
   }
   public void paint(Graphics g)
   {
	g.drawString(s, 70, 80);
   }
}

/* <applet code = "Firstapplet.class" width = 400 height = 300>
   </applet> */