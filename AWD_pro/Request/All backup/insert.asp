<%@ Language=VBScript %>

<%
dim cn,rs

Set cn= Server.CreateObject("ADODB.Connection")
str=Server.Mappath("student.mdb") 
cn.open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" & str
set rs=server.CreateObject("adodb.recordset")

rs.Open "select * from student ",cn,1,3
rs.AddNew
rs.Fields("rollno").Value=request.Form("txtrollno")
rs.Fields("stud_name").Value=request.Form("txtname")
rs.Fields("fees").Value=request.Form("txtfees")
rs.Update
response.Write("Record Saved")
Response.Redirect("display.asp")
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
