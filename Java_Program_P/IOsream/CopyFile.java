import java.io.*;

public class CopyFile 
{
   public static void main(String[] args) throws Exception 
   {
      BufferedWriter out1 = new BufferedWriter(new FileWriter  ("ABC.txt"));

      out1.write(".... yes... Welcome in the Java World.....");
      out1.close();

      InputStream in = new FileInputStream(new File("ABC.txt"));
      OutputStream out = new FileOutputStream(new File("Test.txt"));

      byte[] buf = new byte[1024];
      int len;

      while ((len = in.read(buf)) > 0) 
      {
         out.write(buf, 0, len);
      }
      in.close();
      out.close();

      BufferedReader in1 = new BufferedReader(new FileReader ("Test.txt")  );
      String str;

      while ((str = in1.readLine()) != null) 
      {
         System.out.println(str);
      }
      in1.close();
   }
}