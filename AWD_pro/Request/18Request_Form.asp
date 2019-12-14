<%@ Language=VBScript %>
<HTML>
<HEAD>
<META NAME="GENERATOR" Content="Microsoft Visual Studio 6.0">
</HEAD>
<BODY>
<%="User Name:" &Request.Form("txt1")&"<br> Password: " & Request.Form("txt2")%>
<%str=Request.Form("Sub")
'arr=split(str,",")
'for each ii in arr

'Response.Write arr(i)
'Next
Response.Write(str)
%>
<P>&nbsp;</P>

</BODY>
</HTML>
