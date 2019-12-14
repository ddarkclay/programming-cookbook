import java.awt.*;
//It shows how to make use of textfields and lables.

class TextLabel extends Frame
{
   TextField txtName = new TextField(20);
   Label lblName = new Label("Name:  ");

   public TextLabel(String title)
   {
      super(title);
      setLayout(new FlowLayout());
      add(lblName);
      add(txtName);
   }
   
   public static void main(String args[])
   {
      TextLabel t = new TextLabel("Testing components!");
      t.setSize(200,300);
      t.setVisible(true);
   }
}