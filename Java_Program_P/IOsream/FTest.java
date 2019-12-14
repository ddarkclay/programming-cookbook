import java.io.File;
class FTest
{
  static void p(String s)
  {
     System.out.println(s);
  }

  public static void main(String args[])
  {
   File f1 = new File(args[0]);
   p(f1.getName()+(f1.exists()?":exists....." : " :does not exist..."));

   p("File size :  "+f1.length()+"   bytes");

   p("Is"+(f1.isDirectory()?" : a directory...":"    :not a directory..."));
 
 }
}