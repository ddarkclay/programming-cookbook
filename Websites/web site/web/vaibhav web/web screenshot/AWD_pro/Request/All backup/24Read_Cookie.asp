<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
Response.Write"User name= " & Request.Cookies("MyCookie")("User")& "<br>"
Response.Write"Password = " & Request.Cookies("MyCookie")("Pass")
%>

<P>&nbsp;</P>

</BODY>
</HTML>
