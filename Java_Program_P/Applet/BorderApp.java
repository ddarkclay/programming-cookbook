import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* <applet code = "BorderApp" width = 400 height = 300>
   </applet> */

public class BorderApp extends Applet
{
          public void init()
          {
	setLayout(new BorderLayout());
	Button  b1 = new Button("East");
	Button  b2 = new Button("West");
	Button  b3 = new Button("North");
	Button  b4 = new Button("South");
	Button  b5 = new Button("Center");
	add("East",b1);
	add("West",b2);
	add("North",b3);
	add("South",b4);
	add("Center",b5);
          }
}