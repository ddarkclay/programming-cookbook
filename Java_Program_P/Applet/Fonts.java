import java.applet.*;
import java.awt.*;

public class Fonts extends Applet
{
   public void paint(Graphics g)
   {
	String q = "Attitude is the mind's paintbrush; it can color any situation";
	Font f = new Font("Georgia", Font.ITALIC, 16);
	g.setFont(f);
	g.drawString(q,20,20);
   }
}
/* <applet code = "Fonts" width = 400 height = 300>
   </applet> */