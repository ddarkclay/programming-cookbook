<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim str
str=" minal  "
str2="Minal"
Response.Write(ucase(str)&"<br>")
Response.Write(lcase(str)&"<br>")
Response.Write(ltrim(str)&"<br>")
Response.Write(rtrim(str)&"<br>")
Response.Write(trim(str)&"<br>")
Response.Write(StrReverse(str)&"<br>")
Response.Write(StrComp(str,str2)&"<br>")
Response.Write("Using Right:"& Right(str2,1)&"<br>")
Response.Write("Using Left:" &Left(str2,2)&"<br>")
Response.Write("Using Mid:" & mid(str,1,3)&"<br>")
Response.Write("Using Instr:" & Instr(1,str,"al")&"<br>")
Response.Write("Using Replace:" & Replace(str,"m","P")&"<br>")
%>
<P>&nbsp;</P>

</BODY>
</HTML>
