<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
	dim str
	str=Request.QueryString("hby")
	dim arr
	arr=Split(str,",")

	for i=LBound(arr) to UBound(arr)
	Response.Write(arr(i))& "<br>"
	next
%>
<P>&nbsp;</P>

</BODY>
</HTML>
