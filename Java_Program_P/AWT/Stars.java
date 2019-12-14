import java.awt.*;
//It shows how to create a choice list is listed.

class Stars extends Frame
{
   Choice moviestars = new Choice();

   Label lbl = new Label(" Who is your favorite movie star?  ");

   public Stars(String s)
   {
      super(s);
      setLayout(new FlowLayout());
      moviestars.addItem("Amitabh Bachan");
      moviestars.addItem("Rimi Sen");
      moviestars.addItem("Hemamalini");
      moviestars.addItem("Jitendra");
      moviestars.addItem("Samira Reddi");
      add(lbl);
      add(moviestars);
   }
   
   public static void main(String args[])
   {
      Stars s = new Stars("Literacy...! ");
      s.setSize(400,400);
      s.setVisible(true);
   }
}