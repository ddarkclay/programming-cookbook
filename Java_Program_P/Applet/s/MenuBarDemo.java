import java.awt.*;
import java.awt.event.*;
import java.io.*;

class MenuBarDemo extends Frame implements ActionListener
{
    public static void main(String args[])
    {
        MenuBarDemo d=new MenuBarDemo();
    }

    TextArea ta;
    MenuBar mb;
    Menu mf,me;
    MenuItem mo,mn,ms,mex,mc,mco,mp;
    BufferedReader in;
    BufferedWriter out;
    FileDialog fs,fo;

    public MenuBarDemo()
    {
        super("Menu Bar Demo");

        mb=new MenuBar();
        ta=new TextArea(20,30);

        setMenuBar(mb);

        mf=new Menu("File");
        me=new Menu("Edit");
        mb.add(mf);
        mb.add(me);
        
        mn=new MenuItem("New");
        mo=new MenuItem("Open");
        ms=new MenuItem("Save");
        mex=new MenuItem("Exit");

        mf.add(mn);
        mf.add(mo);
        mf.add(ms);
        mf.add(mex);

        mc=new MenuItem("Cut");
        mco=new MenuItem("Copy");
        mp=new MenuItem("Paste");

        me.add(mc);
        me.add(mco);
        me.add(mp);

        fs=new FileDialog(this,"File Save",FileDialog.SAVE);
        fo=new FileDialog(this,"File Open",FileDialog.LOAD);
        
        mn.addActionListener(this);
        mo.addActionListener(this);
        ms.addActionListener(this);
        mex.addActionListener(this);

        add(ta,BorderLayout.CENTER);

        setSize(400,400);
        setVisible(true);
        addWindowListener(new WindowAdapter()
        {
            public void windowClosing(WindowEvent e)
            {
                System.exit(0);
            }

        });
    }
    public void actionPerformed(ActionEvent e)
    {
        if((MenuItem)e.getSource()==mn)
            ta.setText(" ");
        else if((MenuItem)e.getSource()==mex)
            System.exit(0);
        else if((MenuItem)e.getSource()==ms)
            {   
            fs.setVisible(true);
            try
            {
                out=new BufferedWriter(new FileWriter(fs.getFile()));
                out.write(ta.getText());
                out.close();
            }
            catch(Exception e1)
            {
                ta.setText(""+e1.getMessage());
            }
        
            }
            else if((MenuItem)e.getSource()==mo)
            {
                fo.setVisible(true);
                try
                {
                    in=new BufferedReader(new FileReader(fo.getFile())) ;
                    String tmp,dis="";
                    while((tmp=in.readLine())!=null)
                    {
                        dis=dis+tmp+"\n";
                    }
                    ta.setText(dis);
                    in.close();

                }
                catch(Exception e2)
                {
                    ta.setText(""+e2.getMessage());
                }

            }
    }
}