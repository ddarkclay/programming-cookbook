<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
select case Hour(now)
case 0,1,2,3,4,5,6,7,8,9,10,11
	Response.Write("good Morning")
case 11,12,13,14,15,16,17
	Response.Write("Good afternoon")
case else
	Response.Write("Good Night")
end select
%>
<P>&nbsp;</P>

</BODY>
</HTML>
