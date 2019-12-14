import java.awt.*;
import java.awt.event.*;

public class MultipleClicks_5 extends Frame
{
  Button b1;
  Label l1,l2,l3;
  public MultipleClicks_5()
  {
    setLayout(null);
    b1 = new Button("CLICK ME");
	l1 = new Label();
	l2 = new Label();
	l3 = new Label();
	
	b1.setBounds(250,150,100,30);
	setLayout(null);
	l1.setBounds(220,200,200,80);
	l2.setBounds(210,250,200,80);
	l3.setBounds(200,300,200,80);
    b1.addMouseListener(new HelperListener());

    add(b1);
    add(l1);
    add(l2);
    add(l3);
    setSize(650, 550);
    setVisible(true);
  }
  public static void main(String args[])
  {
    new MultipleClicks_5();
  }
  
  class HelperListener  extends MouseAdapter
	{
		int single=0,doub=0,multi=0;
		public void mouseClicked (MouseEvent e) 
		{
			int count = e.getClickCount();
			if(count == 1)
			{
				single++;
				l1.setText("Sigle Click is : "+single+" Times");
			}
			else if(count == 2)
			{
				doub++;
				l2.setText("Double Clicks are : "+doub+" Times");
			}
			else
			{
				multi++;
			    l3.setText("Multiple Clicks are : "+multi+" Times");
			}
		}
	}
}
