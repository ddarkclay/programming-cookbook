<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim arr(4)
'arr=Array(10,20,30,40)
arr(0)=10
arr(1)=20
arr(2)=30
arr(3)=40
for i=0 to 3
	Response.Write(arr(i)&"<br>")
next

%>
<P>&nbsp;</P>
Using Array

</BODY>
</HTML>
