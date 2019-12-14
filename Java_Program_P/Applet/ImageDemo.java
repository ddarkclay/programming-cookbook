import java.awt.*;
import java.applet.*;

/* <applet code = "ImageDemo" width = 600 height = 600>
   </applet> */

public class ImageDemo extends Applet
{
   Image i;
   public void init()
   {
	i = getImage(getCodeBase(),"AB.jpg");
   }
   public void paint(Graphics g)
   {
	g.drawImage(i, 20, 20,this);
   }
}