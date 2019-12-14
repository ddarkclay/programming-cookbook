import java.applet.*;
import java.awt.*;
import java.awt.event.*;
/*<applet code="ScrollDemo_4" height="400" width="300"> </applet>*/
public class ScrollDemo_4 extends Applet implements AdjustmentListener
{
            Scrollbar s1, s2, s3;
            GridLayout g;

            public void init()
            {
                        g = new GridLayout(10,1,10,10);
                        setLayout(g);
                        s1 = new Scrollbar(Scrollbar.HORIZONTAL,0,50,0,255);
                        s2 = new Scrollbar(Scrollbar.HORIZONTAL,0,50,0,255);
                        s3 = new Scrollbar(Scrollbar.HORIZONTAL,0,50,0,255);
                        s1.addAdjustmentListener(this);
                        s2.addAdjustmentListener(this);
                        s3.addAdjustmentListener(this);
                        add(s1);           add(s2);           add(s3);
            }

            public void adjustmentValueChanged(AdjustmentEvent e)
            {
                        repaint();
            }

            public void paint(Graphics g)
            {
                        int x, y, z;
                        x = s1.getValue();
                        y = s2.getValue();
                        z = s3.getValue();
                        showStatus("Red : " + x + "  Green : " + y + "  Blue : " + z);
                        Color c = new Color(x,y,z);
                        setBackground(c);
            }
}










