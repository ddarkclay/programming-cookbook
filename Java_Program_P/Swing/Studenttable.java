import javax.swing.*;
import java.awt.*;

class Studenttable
{
	public static void main(String args[])
	{
		StudentFrame sf = new StudentFrame();
		sf.setSize(400,400);
		sf.setVisible(true);
	}
}

class StudentFrame extends JFrame
{
	public StudentFrame()
	{
		Object [][] cells = {
			{"Adv Java", new Integer(01),new Integer(40000)},
			{"ERP", new Integer(02),new Integer(50000)},
			{"Dot Net",new Integer(03),new Integer(70000)},
		};

		String[] colnm = {"CourseName","CourseCode","Fees"};
		JTable table = new JTable(cells,colnm);
		Container contentPane = getContentPane();
		contentPane.add(new JScrollPane(table),"Center");
	}
}
