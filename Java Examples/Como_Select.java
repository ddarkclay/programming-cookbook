/*
	Get Selected Item Of AWT Choice Or Combobox Example 
	This java example shows how to get selected item of a choice or combobox 
	using Java AWT Choice class.
*/

import java.applet.Applet;
import java.awt.Choice;
import java.awt.Graphics;
import java.awt.event.ItemEvent;
import java.awt.event.ItemListener;

/*
<applet code="Como_Select" width=200 height=200>
</applet>
*/

public class Como_Select extends Applet implements ItemListener
{
	
	Choice language = null;
	
	public void init(){
		
		//create choice or combobox
		language = new Choice();
		
		//add items to the choice
		language.add("Java");
		language.add("C++");
		language.add("VB");
		language.add("Perl");
		
		//add choice or combobox
		add(language);
		
		//add item listener
		language.addItemListener(this);
		
	}
	
	public void paint(Graphics g){
		/*
		 * To get selected item, use
		 * String getSelectedItem()
		 * method of AWT Choice class.
		 */
		g.drawString(language.getSelectedItem(),10, 70);
	}

	public void itemStateChanged(ItemEvent arg0) {
		repaint();		
	}
}
