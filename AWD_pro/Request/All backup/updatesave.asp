<%@ Language=VBScript %>

<%
dim cn,rs

Set cn= Server.CreateObject("ADODB.Connection")
str=Server.Mappath("student.mdb") 
cn.open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" & str
set rs=server.CreateObject("adodb.recordset")

rs.Open "update student set stud_name='" & request.Form("txtname") & "', fees=" & request.Form("txtfees") & " where rollno=" & request.Form("txtrollno") & "",cn
'rs.Open "delete from student where rollno=" & Request.Form("txtrollno") & "",cn
response.Write("Record Edited")



%>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<form name=frm method=post action="display.asp">
<input type=submit value="Display" >
</form>
<P>&nbsp;</P>


</BODY>
</HTML>
