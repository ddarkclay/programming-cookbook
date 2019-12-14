<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim arr
arr=Array(10,20,30,40)
for i=0 to 3
	Response.Write(arr(i)&"<br>")
next

%>
<P>&nbsp;</P>
Using Array

</BODY>
</HTML>
