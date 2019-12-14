import java.sql.*;
import java.util.*;

class CalState
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
	String url = "jdbc:odbc:test2";
	Connection con = DriverManager.getConnection(url,"sa","pass");

	String proc = "CREATE PROCEDURE MAXIMUM as SELECT max(Fee) FROM Course";
	/*PreparedStatement pst = con.PreparedStatement("UPDATE Course SET No = ? WHERE Coursetitle = ?");

	pst.setInt(3,800);
	pst.setString(2,"SCJP");
	pst.executeUpdate();
	System.out.println("Recor is Updated !");*/

	Statement s = con.createStatement();
	s.execute(proc);
	CallableStatement csmt = con.prepareCall("{call maximum}");
	ResultSet rs = s.executeQuery();

	rs.next();
	int x = rs.getInt(1);
	System.out.println(x);

	/*while(rs.next())
	{
		System.out.println(rs.getString(1)+"\t");
		System.out.println(rs.getString(2)+"\t");
		System.out.println(rs.getInt(3));
		System.out.println("   ");
	}
	con.close();*/
         }
         catch(SQLException ce)
        {
	System.out.println(ce);
         }
    }
}

