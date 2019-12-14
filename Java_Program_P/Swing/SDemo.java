import java.awt.*;
import javax.swing.*;

public class SDemo extends JFrame
{
	public SDemo( String title)
	{
		super(title);
	}

	public static void main( String args[])
	{
		SDemo sd = new SDemo( "  Swinging in the Frame  ");
		sd.setVisible(true);
		sd.setSize(400,400);
	}
}