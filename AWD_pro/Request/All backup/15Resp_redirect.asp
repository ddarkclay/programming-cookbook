<%@ Language=VBScript %>
<%option explicit %>


<HTML>
<BODY bgColor=peachpuff>
<%
dim uname
uname="min1"
if(uname="min1" )then
	Response.Redirect("Welcome.html")
else
	Response.Write("Invalid User")
end if

%>
</form>
</BODY>
</HTML>
