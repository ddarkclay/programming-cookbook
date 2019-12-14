import java.awt.*;

// It shows how to create a frame instance.

class FrameDemo extends Frame
{
   public FrameDemo(String title)
   {
	super(title);
   }
   
   public static void main(String args[])
   {
	FrameDemo f = new FrameDemo("I have been Framed...!");
	f.setSize(500,500);
	f.setVisible(true);
   }
}