/*
        Insert Item To a List At Specified Index Example
        This java example shows how to insert an item to a list at specified
        index using add method of AWT List class.
*/
 
import java.applet.Applet;
import java.awt.List;
 
/*
<applet code="InsertItemToAList" width=200 height=200>
</applet>
*/
 
public class InsertItemToAList extends Applet{
 
        public void init(){
               
                //create a list
                List list = new List(5, true);
               
                //add items to a list  
                list.add("One");
                list.add("Two");
                list.add("Three");
                list.add("Four");
                list.add("Five");
                list.add("Six");
                list.add("Seven");
               
                //add list
                add(list);
               
                /*
                 * To insert an item at specified index in the list, use
                 * void add(String item, int index)
                 * method.
                 */
               
                list.add("Fifty", 2);

	}
	
}