<%@ Language=VBScript %>
<%
dim con,rs
Set con=Server.CreateObject("ADODB.Connection")
Set rs=Server.CreateObject("ADODB.RecordSet")
con.ConnectionString="DSN=myDSN"
con.Open 

str="insert into stud values(4,'Praful')"


str="insert into stud values(" & Request.Form("txtRoll")& ",'" & Request.Form("txtName")& "')"
con.Execute str

Response.Write("Done")
con.Close
%>
