import java.awt.*;
import java.awt.event.*;
import java.util.*;

class ArrayListDemo extends Frame
{
	TextField t1;
	Label l1 = new Label("Name :  ");
	Button b1 = new Button("ADD");
	Button b2 = new Button("Del");
	Button b3 = new Button("Exit");
	ArrayList a1 = new ArrayList();

	public ArrayListDemo()
	{
		super();
		setLayout(new FlowLayout());
		add(l1);
		t1 = new TextField(10);
		add(t1);
		add(b1);
		add(b2);
		add(b3);
		ButtonHandler bh = new ButtonHandler();
		b1.addActionListener(bh);
		b2.addActionListener(bh);
		b3.addActionListener(bh);
	}
	
	public static void main(String args[])
	{
		ArrayListDemo f = new ArrayListDemo();
		f.setSize(400,400);
		f.setVisible(true);
	}
	public void paint(Graphics g)
	{
		g.drawString("Size of array is  "+a1.size(),100,100);
	}
	class ButtonHandler implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			String pp = e.getActionCommand();
			if(pp.equals("ADD"))
			{
				a1.add(t1.getText());
				repaint();
			}
			else if(pp.equals("Del"))
			{
				a1.remove(t1.getText());
				repaint();
			}
			else
				System.exit(0);
		}
	}
}