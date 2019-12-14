import javax.swing.*;
import java.awt.*;

public class Menutest extends JApplet
{
	public void init()
	{
			JMenuBar mb = new JMenuBar();
			JMenu fileMenu = new JMenu("Display");
			JMenu pullRightMenu = new JMenu("pull right");
			fileMenu.add("Welcome");
			fileMenu.addSeparator();
			fileMenu.add(pullRightMenu);
			fileMenu.add("Exit");
			pullRightMenu.add(new JCheckBoxMenuItem("Good morning!"));
			pullRightMenu.add(new JCheckBoxMenuItem("Good afternoon!"));
			pullRightMenu.add(new JCheckBoxMenuItem("Good night!"));
			mb.add(fileMenu);
			setJMenuBar(mb);

	}
}
/*<applet code = "Menutest" width = 300 height = 300></applet>*/