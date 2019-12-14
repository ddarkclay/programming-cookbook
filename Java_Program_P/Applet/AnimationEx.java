import java.awt.*;
import java.applet.*;
public class AnimationEx extends Applet
  {
    Image pic;
    public void init()
      {
        pic=getImage(getDocumentBase(),"1.jpg");
      }
    public void paint(Graphics grp)
      {
        for(int i=50;i<600;i++)
          {
            grp.drawImage(pic, i,30,this);
            try
              {
                Thread.sleep(100);
              }
            catch(Exception e){}
          }
      }
  }
/*
<applet code="AnimationEx.class" width="400" height="300">
</applet
*/