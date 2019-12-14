SET SERVEROUTPUT ON
Declare
	Cursor C1 IS Select Ename,Job,Sal from Emp;
	vname Emp.ename%TYPE;
	vjob Emp.job%TYPE;
	vsal Emp.sal%TYPE;
	
Begin
	Open C1;
	Loop
		Fetch C1 into vname,vjob,vsal;
		Exit when C1%NOTFOUND;   
		Dbms_output.put_line(vname||'      '||vjob||'      '||vsal);
	End Loop;
	Close C1;
End;
/
SET SERVEROUTPUT OFF
