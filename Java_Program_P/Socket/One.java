import java.awt.*;
import java.applet.*;

public class One extends Applet
{
      TextArea ta;
       public void init()
       {
	ta = new TextArea("		");
	add(ta);
        }
        public void putText(String s)
        {
	ta.append(s+"\n");
         }
}