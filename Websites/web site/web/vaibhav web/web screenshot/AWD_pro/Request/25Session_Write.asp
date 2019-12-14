<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
Session("today") = Date()
Session("Age")=21
Session("User")="Minal"
Response.Write("Session Started")
%>
<P>&nbsp;</P>

</BODY>
</HTML>
