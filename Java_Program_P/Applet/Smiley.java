/*
        Draw Smiley In Applet Example
        This Java example shows how to to draw smiley in an applet window using
        drawString Java Applet class.
*/
 /*<Applet code = Smiley height = 400 width = 400></Applet>*/
 
import java.awt.*;
import java.applet.*;
 
public class Smiley extends Applet{
       
        public void paint(Graphics g){
               
                Font f = new Font("Helvetica", Font.BOLD,20);
                g.setFont(f);
                g.drawString("Keep Smiling!!!", 50, 30);
                g.drawOval(60, 60, 200, 200);
                g.fillOval(90, 120, 50, 20);
                g.fillOval(190, 120, 50, 20);
                g.drawLine(165, 125, 165, 175);
                g.drawArc(110, 130, 95, 95, 0, -180);
        }
}