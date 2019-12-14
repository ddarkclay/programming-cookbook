import java.applet.*;
import java.awt.*;

public class Fonts2 extends Applet
{
   public void paint(Graphics g)
   {
	String q = "Happiness is an attitude";
	Font f = new Font("Times New Roman", Font.BOLD|Font.ITALIC, 24);
	FontMetrics fm = getFontMetrics(f);
	g.setFont(f);
	int x = (getSize().width - fm.stringWidth(q))/2;
	int y = getSize().height/2;
	g.drawString(q,x,y);
   }
}
/* <applet code = "Fonts2" width = 400 height = 300>
   </applet> */