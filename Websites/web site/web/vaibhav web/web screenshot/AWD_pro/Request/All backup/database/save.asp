<html>

<%
Dim Conn
Dim Rs
Dim sql
'Create an ADO connection and recordset object
Set Conn = Server.CreateObject("ADODB.Connection")
Set Rs = Server.CreateObject("ADODB.Recordset")
'Set an active connection and select fields from the database
Conn.Open "DRIVER={Microsoft Access Driver (*.mdb)}; DBQ=" & Server.MapPath("FeedBack.mdb")
sql= "SELECT name, comments FROM tblFeeds;"

'Set the lock and cursor type
Rs.CursorType = 2
Rs.LockType = 3

Rs.Open sql, Conn    'Open the recordset with sql query

Rs.AddNew 'Prepare the database to add a new record and add
Rs.Fields("name") = Request.Form("name")
Rs.Fields("comments") = Request.Form("comments")

Rs.Update   'Save the update
Rs.Close
Set Rs = Nothing
Set Conn = Nothing
%>
<body onload="javascript:window.location='view.asp'" >
</body>


</html>



