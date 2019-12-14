import java.sql.*;
import java.util.*;

class Jdbctest
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
	String url = "jdbc:odbc:test";
	Connection con = DriverManager.getConnection(url);
	Statement s = con.createStatement();
	ResultSet rs = s.executeQuery("select * from friends");
	while(rs.next())
	{
		System.out.print(rs.getString(1)+"\t");
		System.out.print(rs.getString(2)+"\t");
		System.out.print(rs.getInt(3));
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