<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
sub No1(j)
	for i=1 to j step 1
		Response.Write( "<br>"& i )
	next
end sub
%>
<P>&nbsp;</P>
Using Subroutine <% No1(5) %>

</BODY>
</HTML>
