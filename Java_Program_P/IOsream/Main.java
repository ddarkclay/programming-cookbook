//last modification date of file.

import java.io.File;
import java.util.Date;

public class Main 
{
   public static void main(String[] args) 
  {
      File file = new File("FTest.java");
      Long lastModified = file.lastModified();
      Date date = new Date(lastModified);
      System.out.println(date);
   }
}
