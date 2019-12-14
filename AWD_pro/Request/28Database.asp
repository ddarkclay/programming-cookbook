<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim con,rs
Set con=Server.CreateObject("ADODB.Connection")
Set rs=Server.CreateObject("ADODB.RecordSet")
con.ConnectionString="DSN=myDSN"
con.Open 
str="select * from stud"
rs.Open str,con,,,adCmdTable


Response.Write("<Table border=1><th>Roll<th> Name")
do while not rs.EOF
	Response.Write("<tr>")
	Response.Write("<td>" & rs("roll"))
	Response.Write("<td>" & rs("sname"))
	Response.Write("</tr>")
	rs.MoveNext
	
loop
Response.Write("</Table>")
rs.Close

con.Close
%>
<P>&nbsp;</P>

</BODY>
</HTML>
