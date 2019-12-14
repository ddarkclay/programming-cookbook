import java.awt.*;
import javax.swing.*;

public class SLabelDemo extends JApplet
{
	public void init()
	{
		getContentPane().setLayout( new FlowLayout());
		ImageIcon icon = new ImageIcon("AB.jpg");
		JLabel ab_label = new JLabel("This is a car ", icon, SwingConstants.LEFT);
		getContentPane().add(ab_label);

	}
}