import javax.swing.*;
import java.awt.event.*;
public class Test_Swing_2 extends JFrame
{
	JLabel l1,l2,l3,l4;
	JTextField t1,t2;
	JButton b1;
	
	public Test_Swing_2() {}
	public Test_Swing_2(String s)
	{
		super(s);
	}
	
	public void setComponents()
	{
		l1 = new JLabel("Addition of Two Numbers");
		l2 = new JLabel("Enter First Number : ");
		l3 = new JLabel("Enter Second Number : ");
		l4 = new JLabel();
		t1 = new JTextField();
		t2 = new JTextField();
		b1 = new JButton("Addition");
		
		setLayout(null);
		l1.setBounds(100,30,200,30);
		l2.setBounds(50,80,120,30);
		t1.setBounds(190,80,150,30);
		l3.setBounds(50,130,150,30);
		t2.setBounds(190,130,150,30);
		b1.setBounds(150,200,100,40);
		l4.setBounds(100,270,150,30);
		b1.addActionListener(new handler());
		add(l1);
		add(l2);
		add(t1);				
		add(l3);
		add(t2);
		add(b1);
		add(l4);
	}
	
	class handler implements ActionListener
	{
		public void actionPerformed(ActionEvent e)
		{
			int a = Integer.parseInt(t1.getText());
			int b = Integer.parseInt(t2.getText());
			int s = a + b;
			l4.setText("Sum is : "+s);
		}	
	}
	
	public static void main(String args[])
	{
		Test_Swing_2 jf = new Test_Swing_2("Swing Examle 2");
		jf.setComponents();
		jf.setSize(400,400);
		jf.setVisible(true);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
}
