<%@ Language=VBScript %>
<%option explicit %>


<HTML>
<BODY bgColor=peachpuff>
<%
dim no,facto,num,i
no=4
facto=1
function fact(num)
	for i=1 to num
		facto=facto*i
		fact=facto
	next
end function
	Response.Write( fact(no))
%>
</form>
</BODY>
</HTML>
