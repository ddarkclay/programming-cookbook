import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.tree.*;

public class TreeDemo extends JFrame
{
   public static void main(String args[])
   {
      TreeDemo s = new TreeDemo("A sky full of stars...! ");
      s.setSize(400,400);
      s.setVisible(true);
   }
   public TreeDemo(String title)
   {
      setTitle(title);
      DefaultMutableTreeNode root = new DefaultMutableTreeNode("Painting");
      DefaultMutableTreeNode style = new DefaultMutableTreeNode("Impressionism");
      root.add(style);
      DefaultMutableTreeNode artist = new DefaultMutableTreeNode("Caravaggio");
      style.add(artist);
      artist = new DefaultMutableTreeNode("Degas");
      style.add(artist);
      artist = new DefaultMutableTreeNode("Monet");
      style.add(artist);
      style = new DefaultMutableTreeNode("Expressionism");
      style.add(style);
      artist = new DefaultMutableTreeNode("Henry Moore");
      style.add(artist);
      artist = new DefaultMutableTreeNode("Salvador Dali");
      style.add(artist);
   
      JTree jt = new JTree(root);
      Container contentPane = getContentPane();
      contentPane.add(new JScrollPane(jt));
   }
}
