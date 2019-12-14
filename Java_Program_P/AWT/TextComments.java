import java.awt.*;
//It shows how to make use of textarea.

class TextComments extends Frame
{
   TextArea txtComment = new TextArea();
   Label lbl = new Label("Comments:  ");

   public TextComments(String title)
   {
      super(title);
      setLayout(new FlowLayout());
      add(lbl);
      add(txtComment);
   }
   
   public static void main(String args[])
   {
      TextComments t = new TextComments("Testing components!");
      t.setSize(500,500);
      t.setVisible(true);
   }
}