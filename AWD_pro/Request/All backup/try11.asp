<%@ Language=VBScript %>



<HTML>
<BODY bgColor=peachpuff>
<form name=frm method=POST action=redirect.asp"
<P>User Name<input type=text name=txtU>
<P>Password&nbsp;<input type=text name=txtP> </P>
<P><INPUT type=submit value=Submit name=submit1></P>
<%
if(txtU="min" and txtP="Pas")then
	Response.Redirect("Welcome.html")
else
	Response.Write("Invalid User")
end if

%>

</BODY>
</HTML>
