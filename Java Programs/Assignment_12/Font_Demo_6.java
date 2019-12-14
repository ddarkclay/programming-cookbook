import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;

/* <applet code="Font_Demo_6" width="500" height="400"> </applet> */
public class Font_Demo_6 extends Applet implements ItemListener
{
	Label l1,l2,l3,l4;
	Choice ch = null;
	List list;
	CheckboxGroup cg;
	Checkbox c1,c2,c3;
	Font f1,f2,f3;
	public void init()
	{
		l1 = new Label("Font Name");
		l2 = new Label("Font Size");
		l3 = new Label("Font Style");
		l4 = new Label("Hello World");
		
		ch = new Choice();
		ch.addItem("TimesRoman");
		ch.addItem("Georgia");
		ch.addItem("SansSerif");
		
		list = new List(3,false);
		list.add("20");
		list.add("22");
		list.add("24");
		
		cg = new CheckboxGroup();
		c1 = new Checkbox("Bold",cg,false);
		c2 = new Checkbox("Italic",cg,false);
		c3 = new Checkbox("Plain",cg,true);
		
		setLayout(null);
		l1.setBounds(50,30,100,30);
		ch.setBounds(50,80,100,50);
		ch.addItemListener(this);
		
		l2.setBounds(200,30,100,30);
		list.setBounds(200,80,100,100);
		
		l3.setBounds(350,30,100,30);
		c1.setBounds(350,80,100,50);
		c2.setBounds(350,130,100,50);
		c3.setBounds(350,180,100,50);
		
		l4.setBounds(200,250,100,50);
		
		add(l1);
		add(ch);
		ch.addItemListener(this);
		add(l2);
		add(list);
		add(l3);
		add(c1);
		c1.addItemListener(this);
		add(c2);
		c2.addItemListener(this);
		add(c3);
		c3.addItemListener(this );
		add(l4);
	}
	
	public void paint(Graphics g)
	{
		String str = ch.getSelectedItem();
		Checkbox chk = cg.getSelectedCheckbox(); 
		
		g.drawString(chk.getLabel(), 10 ,70);
		
		if(str.equals("TimesRoman"))
		{
			Font f1 = new Font("TimesRoman",Font.PLAIN,14);
			g.setFont(f1);
			g.drawString(str,200,150);
		}
		else if(str.equals("Georgia"))
		{
			Font f2 = new Font("Georgia",Font.PLAIN,14);
			g.setFont(f2);
			g.drawString(str,200,150);
		}
		else if(str.equals("SansSerif"))
		{
			Font f3 = new Font("SansSerif",Font.PLAIN,14);
			g.setFont(f3);
			g.drawString(str,200,150);
		}
		else if(chk.getLabel() == "Bold")
		{
			Font f1 = new Font("SansSerif",Font.BOLD,15);
			l4.setFont(f1);
			repaint();
		}
		else if(chk.getLabel() == "Italic")
		{
			Font f2 = new Font("SansSerif",Font.ITALIC,15);
			l4.setFont(f2);
			repaint();
		}
		else if(chk.getLabel() == "Plain")
		{
			Font f3 = new Font("SansSerif",Font.PLAIN,15);
			l4.setFont(f3);
			repaint();
		}
	}
	
	public void itemStateChanged(ItemEvent arg0) {
		repaint();		
	}
}
