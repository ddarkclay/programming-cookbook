<%@ Language=VBScript %>



<%
dim str
str="TMV"
'Response.Write("Welcome" & str)
'Response.End
'Response.Write("Bye Bye")
'Response.Cookies("nm1")="awanti"
dim rs,cn
set rs=server.CreateObject("adodb.recordset")
set cn=server.CreateObject("adodb.connection")
str=server.MapPath("student.mdb")
cn.Open "provider=microsoft.jet.oledb.4.0; data source=" & str 

rs.Open "select * from stud",cn

do while rs.EOF =false

Response.Write(rs.Fields("rollno").Value & "---")
Response.Write(rs.Fields("stud_name").Value& "---")
Response.Write(rs.Fields("stud_fees").Value )
Response.Write("<br>")
'Response.Write(rs.Fields("rollno").Value & "---" & rs.Fields("stud_name").Value& "---" & rs.Fields("stud_fees").Value & "<br>") 
rs.MoveNext

loop

rs.Close
cn.close

%>


<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>

<P>&nbsp;</P>

</BODY>
</HTML>
