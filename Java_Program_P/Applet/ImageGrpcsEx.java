import java.applet.*;
import java.awt.*;
public class ImageGrpcsEx extends Applet
  {
    Image pic;
    public void init()
      {
        pic =getImage(getDocumentBase(),"1.jpg");
      }
    public void paint(Graphics grp)
      {
        grp.drawImage(pic, 100,30,this);
      }
  }
/*
<applet code="ImageGrpcsEx.class" width="400" height="400">
</applet
*/