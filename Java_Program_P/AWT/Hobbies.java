import java.awt.*;
//It shows how to use the checkboxes.

class Hobbies extends Frame
{
   Checkbox c1 = new Checkbox("Reading",false);
   Checkbox c2 = new Checkbox("Music",false);
   Checkbox c3 = new Checkbox("Painting",false);
   Checkbox c4 = new Checkbox("Movies",false);
   Checkbox c5 = new Checkbox("Dancing",false);
   Label lbl = new Label(" What's your hobby?  ");

   public Hobbies(String s)
   {
      super(s);
  //setLayout(new FlowLayout());
     setLayout(new GridLayout(6,1));
      add(lbl);
      add(c1);
      add(c2);
      add(c3);
      add(c4);
      add(c5);
   }
   
   public static void main(String args[])
   {
      Hobbies h = new Hobbies("A basket full of checkboxes...! ");
      h.setSize(400,400);
      h.setVisible(true);  
   }
}