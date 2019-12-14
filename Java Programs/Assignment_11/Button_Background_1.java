import java.awt.*;
import java.awt.event.*;

class Button_Background_1 extends Frame implements ActionListener
{
   Button btnRed = new Button("Red");
   Button btnGreen = new Button("Green");
   Button btnBlue = new Button("Blue");
   Container container;
   
   public Button_Background_1(String title)
   {
      super(title);
      setLayout(new FlowLayout());
      add(btnRed);
      add(btnGreen);
      add(btnBlue);
      btnRed.addActionListener(this);
      btnGreen.addActionListener(this);
      btnBlue.addActionListener(this);
   }
   
   public static void main(String args[])
   {
      Button_Background_1 b = new Button_Background_1("The Background Button Color...! ");
      b.setSize(500,500);
      b.setVisible(true);
   }
   
   public void actionPerformed(ActionEvent e)
    {
		String clickedButton = e.getActionCommand();
		System.out.println(clickedButton + " Clicked");
		if(clickedButton == "Red")
			setBackground(Color.red);
		else if(clickedButton == "Green")
			setBackground(Color.green);
		else
			setBackground(Color.blue);
	}
}
