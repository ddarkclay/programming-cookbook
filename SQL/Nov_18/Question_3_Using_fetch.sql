SET SERVEROUTPUT ON

Declare
	Cursor C IS Select Cust_Name,City,Mobile_No from Customer_Nov_18;
	vname Customer_Nov_18.Cust_Name%TYPE;
	vcity Customer_Nov_18.City%TYPE;
	vmo Customer_Nov_18.Mobile_No%TYPE;
Begin
	Open C;
	Loop
		Fetch C into vname,vcity,vmo;
		Exit when C%NOTFOUND;
		dbms_output.put_line(vname||'    '||vcity||'    '||vmo);
	End Loop;
	Close C;
End;
/

SET SERVEROUTPUT OFF
