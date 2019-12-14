import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class ProgressBarDemo extends JFrame implements ActionListener
{
	JLabel l = new JLabel("Enter a score out of 1000");
	JProgressBar pbar1;
	JProgressBar pbar2;
	JButton done;
	JTextField tf;
	Container contentPane;
	public static final int MAXSCORE = 1000;

	public ProgressBarDemo()
	{
		super("ProgressBarDemo");
		done = new JButton("Done");
		done.addActionListener(this);
		pbar1 = new JProgressBar(0,MAXSCORE);
		pbar1.setStringPainted(true);
		pbar1.setValue(MAXSCORE);
		tf = new JTextField(10);
		contentPane = getContentPane();
		contentPane.setLayout(new FlowLayout());
		contentPane.add(l);
		contentPane.add(tf);
		contentPane.add(done);
		contentPane.add(pbar1);

	}

	public void actionPerformed(ActionEvent e)
	{
		if(e.getSource().equals(done))
		{
			String score = tf.getText();
			int scoreval = Integer.parseInt(score);
			pbar2 = new JProgressBar(0,MAXSCORE);
			pbar2.setValue(scoreval);
			pbar2.setStringPainted(true);
			contentPane.add(pbar2);
			validate();
		}
	}

	public static void main( String args[])
	{
		JFrame sf = new ProgressBarDemo();
		sf.setVisible(true);
		sf.setSize(400,400);
	}
}