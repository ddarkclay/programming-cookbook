<%@ Language=VBScript %>
<% option Explicit%>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
sub No1
dim i
	for i=1 to 5 step 1
		Response.Write(i)
	next
end sub
%>
<P>&nbsp;</P>
Using Subroutine <% No1 %>

</BODY>
</HTML>
