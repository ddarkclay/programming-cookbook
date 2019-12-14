import java.awt.*;
//It shows how to create three buttons.

class Buttontest extends Frame
{
   Button btnBread = new Button("Bread!");
   Button btnButter = new Button("Butter");
   Button btnJam = new Button("Jam");

   public Buttontest(String title)
   {
      super(title);
      setLayout(new FlowLayout());
      add(btnBread);
      add(btnButter);
      add(btnJam);
   }
   
   public static void main(String args[])
   {
      Buttontest b = new Buttontest("The Three Little Buttons...! ");
      b.setSize(500,500);
      b.setVisible(true);
   }
}