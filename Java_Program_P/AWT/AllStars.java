import java.awt.*;
import java.awt.event.*;

class AllStars extends Frame implements ActionListener
{
   Choice moviestars = new Choice();
   
   Label lblName = new Label(" Enter your Name   ");
   Label lblask = new Label(" Who is your favorite movie star?  ");
   TextField txtName = new TextField(20);
   Button okButton = new Button("OK");
   Button exitButton = new Button("Exit");

   public AllStars(String s)
   {
      super(s);
      setLayout(new FlowLayout());
      moviestars.addItem("Amitabh Bachan");
      moviestars.addItem("Rimi Sen");
      moviestars.addItem("Hemamalini");
      moviestars.addItem("Jitendra");
      moviestars.addItem("Samira Reddi");
      add(lblName);
      add(txtName);
      add(lblask);
      add(moviestars);
      add(okButton);
      add(exitButton);
      okButton.addActionListener(this);
      exitButton.addActionListener(this);
   }
   
   public void actionPerformed(ActionEvent e)
   {
     if(e.getSource() == okButton)
     {
	System.out.println(moviestars.getSelectedItem());     
     }
     if(e.getSource() == exitButton)
     {
	System.exit(0);
     }
   }
   public static void main(String args[])
   {
      AllStars s = new AllStars("A sky full of stars...! ");
      s.setSize(400,400);
      s.setVisible(true);
   }
}