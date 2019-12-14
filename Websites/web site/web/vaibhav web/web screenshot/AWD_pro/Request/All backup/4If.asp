<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim a,b
a=10
b=10
if(a>b)then
	Response.Write("A is Greator")
elseif(b>a) then
	Response.Write("B is Greator")
else
	Response.Write("Both are equal")
end if 
%>
<P>&nbsp;</P>

</BODY>
</HTML>
