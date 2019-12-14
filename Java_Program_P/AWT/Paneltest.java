import java.awt.*;

// It shows how to create a panel instance.

class Paneltest extends Panel
{
   public Paneltest()
   {
	
   }
   
   public static void main(String args[])
   {
	Paneltest f = new Paneltest();
	f.setSize(500,500);
	f.setVisible(true);
   }
}