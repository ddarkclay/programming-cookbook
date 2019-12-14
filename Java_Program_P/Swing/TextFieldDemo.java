import java.awt.*;
import javax.swing.*;

class TextFieldDemo extends JFrame
{
	public TextFieldDemo()
	{
		Container con = getContentPane();
		con.setLayout(new FlowLayout());
   		JLabel jl = new JLabel("TextField ");
   		con.add(jl);
   		JTextField tf = new JTextField(20);
   		con.add(tf);
   		pack();


      setSize(500,500);
      setVisible(true);
   }

   public static void main(String args[])
   {
	   new TextFieldDemo();
   }
}