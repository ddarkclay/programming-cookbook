import java.awt.*;
import java.awt.event.*;

class MenuBar1 extends Frame
{
    MenuBar mb;
    Menu mf,me,m;
    MenuItem mo,mn,ms,mc,mco,mp,m1,m2,m3;
    public MenuBar1()
    {
        super("Menu Bar Demo");

        mb=new MenuBar();
        setMenuBar(mb);
        mf=new Menu("File");
        me=new Menu("Edit");
        mb.add(mf);
        mb.add(me);
        
        mn=new MenuItem("New");
        mo=new MenuItem("Open");
        ms=new MenuItem("Save");


        mf.add(mn);
        mf.add(mo);
        mf.add(ms);

        mc=new MenuItem("Cut");
        mco=new MenuItem("Copy");
        mp=new MenuItem("Paste");
        m=new Menu("Main");

        m1=new MenuItem("First");
        m2=new MenuItem("Second");
        m3=new MenuItem("Third");

        me.add(mc);
        me.add(mco);
        me.add(mp);
        me.add(m);

        m.add(m1);
        m.add(m2);
        m.add(m3);

        setSize(400,400);
        setVisible(true);
    }
    public static void main(String args[])
    {
        MenuBar1 d=new MenuBar1();
    }


}

