<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
for each str in Request.QueryString
Response.Write str & "-" & Request.QueryString(str) & "<br>"
Next
%>
<P>&nbsp;</P>

</BODY>
</HTML>
