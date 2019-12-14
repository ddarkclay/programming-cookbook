import java.awt.*;
import java.awt.event.*;
import java.applet.*;

public class CardLayoutDemo extends Applet implements ActionListener, MouseListener
{
	Checkbox Win98,winNT,solaris,mac;
	Panel osCards;
	CardLayout cardLO;
	Button Win, Other;

	public void init()
	{
		Win = new Button("Windows");
		Other = new Button("Other");
		add(Win);
		add(Other);

		cardLO = new CardLayout();
		osCards = new Panel();
		osCards.setLayout(cardLO);

		Win98 = new Checkbox("Windows 98/XP", null, true);
		winNT = new Checkbox("Windows NT/2000");
		solaris = new Checkbox("Solaris");
		mac = new Checkbox("MacOS");

		Panel winPan = new Panel();
		winPan.add(Win98);
		winPan.add(winNT);

		Panel otherPan = new Panel();
		otherPan.add(solaris);
		otherPan.add(mac);

		osCards.add(winPan,"Windows");
		osCards.add(otherPan, "Other");

		add(osCards);

		Win.addActionListener(this);
		Other.addActionListener(this);

		addMouseListener(this);
	}
	public void mousePressed(MouseEvent e)
	{
		cardLO.next(osCards);
	}
	public void mouseClicked(MouseEvent e)
	{}
	public void mouseEntered(MouseEvent e)
	{}
	public void mouseExited(MouseEvent e)
	{}
	public void mouseReleased(MouseEvent e)
	{}
	public void actionPerformed(ActionEvent ae)
	{
		if(ae.getSource () == Win )
		{
			cardLO.show(osCards, "WinDows");
		}
		else
		{
			cardLO.show(osCards, "Other");
		}
	}
}
/*<applet code="CardLayoutDemo.class" width=300 height=200>
</applet> */