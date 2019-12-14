import java.applet.*;
import java.awt.*;
import java.awt.event.*;

/* <applet code = "GuiDemo" width = 400 height = 300>
   </applet> */

public class GuiDemo extends Applet
{
  Label l1 = new Label("Name");
  Label l2 = new Label("Age");
  Label l3 = new Label("Qualification");
  TextField t1 = new TextField(20);
  TextField t2 = new TextField(20);

  CheckboxGroup c = new CheckboxGroup();
  Checkbox male = new Checkbox("male",c,true);
  Checkbox female = new Checkbox("female",c,false);
  Choice qual = new Choice();

  Button b1 = new Button("Done");
  Button b2 = new Button("Exit");

  Panel p1 = new Panel();
  
  public void init()
  {
     qual.add("BCA");
     qual.add("BSc");
     qual.add("BCs");

     p1.setLayout(new GridLayout(5,2));

     p1.add(l1);
     p1.add(t1);
     p1.add(l2);
     p1.add(t2);
     p1.add(male);
     p1.add(female);
     p1.add(l3);
     p1.add(qual);
     p1.add(b1);
     p1.add(b2);
     p1.setSize(300,300);
     p1.validate();
     add(p1);
  }
}