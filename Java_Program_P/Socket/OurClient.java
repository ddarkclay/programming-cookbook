import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.net.*;
import java.io.*;

/* <applet code="OurClient" height =400 width=400></applet> */

public class OurClient extends Applet implements ActionListener
{
	Button morningButtun = new Button("Morning");
	Button nightButtun = new Button("Night");
	TextArea message = new TextArea(5,20);
	OurSocket os;

	public void init()
	{
		setLayout(new BorderLayout());
		Panel p = new Panel();
		add(p, BorderLayout.NORTH);
		add(message, BorderLayout.SOUTH);
		p.setLayout(new GridLayout(1,0));
		p.add(morningButtun);
		p.add(nightButtun);
		message.setEditable(false);
		morningButtun.addActionListener(this);
		nightButtun.addActionListener(this);
	}

	public void fatalError(Exception ex)
	{
		ex.printStackTrace();
		try
		{
			os.close();
		}
		catch(Exception ex1){;}
	}

	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource() == morningButtun)
		{
			try
			{
				message.setText("");
				os = new OurSocket(getCodeBase().getHost(),81);
				os.println("morning");
				message.append(os.readLine() + "\n");
				message.append(os.readLine() + "\n");
				message.append(os.readLine() + "\n");
				os.close();
			}
			catch(Exception ex)
			{
				fatalError(ex);
			}
		}
		else
		{
			try
			{
				message.setText("");
				os = new OurSocket(getCodeBase().getHost(),81);
				os.println("night");
				message.append(os.readLine() + "\n");
				message.append(os.readLine() + "\n");
				message.append(os.readLine() + "\n");
				os.close();
			}
			catch(Exception ex)
			{
				fatalError(ex);
			}
		}
	}
}