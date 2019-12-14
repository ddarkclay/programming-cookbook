// Draw Polygon

import java.awt.*;
import java.applet.*;

/*<Applet code = "HourGlass.class" width=400 height=400>
</Applet>*/

public class HourGlass extends Applet
{
   public void paint(Graphics g)
   {
     int xpoints[] = {30,200,30,200,30};
    int ypoints[] = {30,30,200,200,30};
     int num = 5;

     g.drawPolygon(xpoints, ypoints, num);
   }
}