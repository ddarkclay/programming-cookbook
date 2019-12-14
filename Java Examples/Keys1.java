import java.applet.Applet; 
import java.awt.*; 
import java.awt.event.*; 
/*<applet code="Keys1" width="500" height="500"> </applet>*/
public class Keys1 extends Applet implements KeyListener
{ 
	TextField input; 
	TextField output1, output2, output3, output4, output5; 
	TextField output6, output7, output8; 
	public void init()
	{ 
		input = new TextField(30); 
		input.addKeyListener(this); 
		output1 = new TextField(30); 
		output2 = new TextField(30); 
		output3 = new TextField(30); 
		output4 = new TextField(30); 
		output5 = new TextField(30); 
		output6 = new TextField(30); 
		output7 = new TextField(30); 
		output8 = new TextField(30); 
		add(input); 
		add(output1); 
		add(output2); 
		add(output3); 
		add(output4); 
		add(output5); 
		add(output6); 
		add(output7); 
		add(output8); 
	}
	public void keyTyped(KeyEvent event)
	{ } 

	public void keyPressed(KeyEvent event)
	{ 
		char char1 = event.getKeyChar(); 
		int n = event.getKeyCode(); 
		int modifiers = event.getModifiers(); 
		output1.setText("You pressed "+char1); 
		output2.setText("Virtual key code value = "+n); 
		output3.setText("Name of key pressed = "+KeyEvent.getKeyText(n)); 
		output4.setText("Shift was pressed = "+event.isShiftDown()); 
		output5.setText("Control key down = "+event.isControlDown()); 
		output6.setText("Alt key was pressed = "+event.isAltDown()); 
		output7.setText("Modifiers value = "+event.getModifiers()); 
		output8.setText("Modifier text = "+KeyEvent.getKeyModifiersText(modifiers));
	} 

	public void keyReleased(KeyEvent event) 
	{} 
}
