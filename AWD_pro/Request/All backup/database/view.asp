<body>
<input type="submit" name="Show" value="Enter Data" onClick="javascript:window.location='enterdata.htm'" >
</body><br>
<html>
<%
Dim Conn
Dim Rs
Dim sql
Set Conn = Server.CreateObject("ADODB.Connection")
Set Rs = Server.CreateObject("ADODB.Recordset")
Conn.Open "DRIVER={Microsoft Access Driver (*.mdb)}; DBQ=" & Server.MapPath("FeedBack.mdb")
sql= "SELECT name, comments FROM tblFeeds;"
Rs.Open sql, Conn
Do While not Rs.EOF
  Response.Write ("-----------------------------------------------------------------------"&"<br>")
  Response.Write ("Name: " & "<font color='red'>" & Rs("name") & "</font>")
  Response.Write ("<br>")
  Response.Write ("Address: " & "<font color='red'>" & Rs("comments") & "</font>")
  Response.Write ("<br>")
  Rs.MoveNext
Loop
Rs.Close
Set Rs = Nothing
Set Conn = Nothing
%>


</html>