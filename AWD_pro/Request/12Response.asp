<%@ Language=VBScript %>
<%option explicit %>

<% Response.Buffer=True%>

<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%
dim i,cnt
cnt=1
Response.Write("Before clear Time:" & now & "<br>")
for i=1 to 100000000
	cnt=cnt+1
next

Response.Write("After Clear Time:" & now)

%>
</BODY>
</HTML>
