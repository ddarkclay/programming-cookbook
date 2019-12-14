<%@ Language=VBScript %>

<html>
<body>
<%
set cn=Server.CreateObject("ADODB.Connection")
str=server.MapPath("student.mdb")
 cn.Open " Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" & str 
 set rs=Server.CreateObject("ADODB.Recordset")
rs.open "SELECT * FROM student",cn%>
<table border=1>
<%
do while rs.EOF=false
%>
<tr>
<form method="post" action="updatedisplay.asp">
<td><input type="submit" name="btnrollno" value="<%=rs.fields("rollno").value%>"></td>


  <td>  <%Response.Write(rs.Fields("stud_name").Value)%></td>
    <td><%Response.Write(rs.Fields("fees").Value)%><br></td>
</form>
</tr>
<%rs.MoveNext
loop%>
</table>
<%
rs.close
cn.close
%>


</body>
</html> 
