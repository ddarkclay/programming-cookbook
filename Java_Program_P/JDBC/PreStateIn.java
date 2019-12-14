import java.sql.*;
import java.util.*;

class PreStateIn
{
   public static void main(String args[])
   {
       try
       {
	             Class.forName("sun.jdbc.odbc.JdbcOdbcDriver");
        }
        catch(ClassNotFoundException ce)
        {
	              System.out.println(ce);
         }
         try
         {
	           String url = "jdbc:odbc:test1";
	           Connection con = DriverManager.getConnection(url);

	           //PreparedStatement pst = con.prepareStatement(" Insert INTO Course values (4,'JAVA',4000) ");
               PreparedStatement pst = con.prepareStatement(" Delete FROM Course WHERE ts = 'q' ");
               pst.executeUpdate();
	           System.out.println("Record is Updated !");

	          Statement s = con.createStatement();
	          ResultSet rs = s.executeQuery("select * from Course");

	while(rs.next())
	{
		System.out.println(rs.getString(1)+"\t");
		System.out.println(rs.getString(2)+"\t");
		System.out.println(rs.getInt(3));
		System.out.println("   ");
	}
	con.close();
         }
         catch(SQLException ce)
        {
	System.out.println(ce);
         }
    }
}

