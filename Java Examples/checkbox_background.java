import java.awt.*;
import java.awt.event.*;

public class checkbox_background extends Frame implements ItemListener
{
	CheckboxGroup cg = new CheckboxGroup();
   Checkbox c1 = new Checkbox("Red",cg,false);
   Checkbox c2 = new Checkbox("Green",cg,false);
   Checkbox c3 = new Checkbox("Blue",cg,true);
   Container container;
   
   public checkbox_background(String title)
   {
      super(title);
      setLayout(new FlowLayout());
      add(c1);
      add(c2);
      add(c3);
      c1.addItemListener(this);
      c2.addItemListener(this);
      c3.addItemListener(this);
   }
   
   public static void main(String args[])
   {
	   checkbox_background b = new checkbox_background("The Background Button Color...! ");
      b.setSize(500,500);
      b.setVisible(true);
   }
	
	public void itemStateChanged(ItemEvent e)
	{ 
		if(e.getSource() == c1)
			setBackground(Color.red);
		else if(e.getSource() == c1)
			setBackground(Color.green);
		else
			setBackground(Color.blue);
	}
}
