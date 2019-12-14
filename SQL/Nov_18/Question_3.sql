SET SERVEROUTPUT ON

Declare
	Cursor C IS Select Cust_Name,City,Mobile_No from Customer_Nov_18;
Begin
	For i in C
	Loop
		dbms_output.put_line(i.Cust_Name||'    '||i.City||'    '||i.Mobile_No);
	End Loop;
End;
/

SET SERVEROUTPUT OFF
