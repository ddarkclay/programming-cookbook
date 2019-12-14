import java.applet.*;
import java.awt.*;
import java.awt.event.*;
import java.net.*;

public class Url_test extends Applet implements ActionListener
{
	Button b ;
	URL url;
	
	public void init()
	{
	        url = null;
	        try
	        {
		url = new URL ("http://www.google.com");
	         }
	         catch(MalformedURLException e)
	         {
		       System.out.println(e); 
	         }
	      
	         b = new Button("Click me!");
	         add(b);
	         b.addActionListener(this);
	}		
	 public void actionPerformed(ActionEvent e)
	 {
		if(e.getSource().equals(b));
		{
			getAppletContext().showDocument(url,"");
		}
	 }	
}