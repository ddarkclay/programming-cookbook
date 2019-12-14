<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim str,dt,str1
str=Session("Age")
Response.Write("Ur age is" & str)

dt=Session("today")
Response.Write("Today is " & dt)

str1=Session("User")
Response.Write("Username is" & str1)
%>
<P>&nbsp;</P>

</BODY>
</HTML>
