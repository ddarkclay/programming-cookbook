SET SERVEROUTPUT ON

Declare
	Cursor C IS Select * from Customer_Nov_18 where Prod_id = (Select Prod_id from Product_Nov_18 where Prod_Name = 'Oil');

Begin
	for i in C
	Loop
		Dbms_output.put_line(i.Cust_id||'    '||i.Cust_Name);
	End Loop;
End;
/

SET SERVEROUTPUT OFF
