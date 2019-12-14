<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
Response.Cookies("MyCookie")("User")="Minal"
Response.Cookies("MyCookie")("Pass")="Pass"
Response.Cookies("MyCookie").Expires=Date+1
Response.Write"Cookie Created"
%>

<P>&nbsp;</P>

</BODY>
</HTML>
