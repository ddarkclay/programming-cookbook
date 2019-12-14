import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.event.*;

class AllStars extends JFrame implements ListSelectionListener
{
  String stars[] = {"Amitabh Bachan","Rimi Sen","Hemamalini","Jitendra","Samira Reddi"};

   JList moviestars = new JList(stars);

   JLabel lblask = new JLabel(" Who is your favorite movie star?  ");
   JTextField jt = new JTextField(30);
  
   public AllStars(String s)
   {
      super(s);
      JPanel p = (JPanel)getContentPane();
      p.setLayout(new BorderLayout());
      p.add("North",lblask);
      moviestars.setSelectionMode(ListSelectionModel.SINGLE_SELECTION);
      moviestars.setSelectedIndex(0);
      moviestars.addListSelectionListener(this);
      moviestars.setBackground(Color.yellow);
      moviestars.setForeground(Color.black);
      p.setBackground(Color.white);
      p.setForeground(Color.black);
      p.add("Center",new JScrollPane(moviestars));
      p.add("South",jt);
      pack();

   }

   public void valueChanged(ListSelectionEvent e)
   {
   		if(e.getValueIsAdjusting() == false)
     	{

     		if(moviestars.getSelectedIndex() != -1)
     		{
				jt.setText((String)moviestars.getSelectedValue());
     		}
		}
   }
   public static void main(String args[])
   {
      AllStars s = new AllStars("A sky full of stars...! ");
      s.setSize(400,400);
      s.setVisible(true);
   }

}
