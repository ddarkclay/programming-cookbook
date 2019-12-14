import java.awt.*;
//It shows how to use the radio buttons.

class Qualification extends Frame
{
   CheckboxGroup cg = new CheckboxGroup();
   Checkbox r1 = new Checkbox("UnderGraduate",cg,false);
   Checkbox r2 = new Checkbox("Graduate",cg,false);
   Checkbox r3 = new Checkbox("Post Graduate",cg,true);
   Checkbox r4 = new Checkbox("Doctorate",cg,false);
   Label lbl = new Label(" Whats ur primary qualification?  ");

   public Qualification(String s)
   {
      super(s);
      setLayout(new GridLayout(6,1));
      add(lbl);
      add(r1);
      add(r2);
      add(r3);
      add(r4);
   }
   
   public static void main(String args[])
   {
      Qualification q = new Qualification("Literacy...! ");
      q.setSize(400,400);
      q.setVisible(true);
   }
}