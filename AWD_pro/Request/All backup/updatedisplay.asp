<%@ Language=VBScript %>

<%
dim cn,rs

Set cn= Server.CreateObject("ADODB.Connection")
str=Server.Mappath("student.mdb") 
cn.open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" & str
set rs=server.CreateObject("adodb.recordset")

rs.Open "select * from student where rollno=" & request.Form("btnrollno") & "",cn

%>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<form method=post action="updatesave.asp">
Enter rollno :-<input type=text name=txtrollno value="<%Response.write(rs.fields("rollno").value) %>"><br>
Enter name :-<input type=text name=txtname value="<%=rs.fields("stud_name").value %>"><br>
Enter fees :-<input type=text name=txtfees value="<%=rs.fields("fees").value %>"><br>
<input type=submit value="Edit Record" name=b1>
</form>


</BODY>
</HTML>
