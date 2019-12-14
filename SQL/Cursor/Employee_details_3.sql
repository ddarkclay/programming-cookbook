SET SERVEROUTPUT ON
Declare
	Cursor C3 IS Select Ename, Job from Emp where Job  = 'Manager' OR Job = 'Sales Executive';
	vname emp.ename%Type;
	vjob emp.job%Type;
Begin
	Open C3;
	Loop
		FETCH C3 into vname, vjob;
		Exit when C3%NOTFOUND;
		Dbms_output.put_line(vname||' : '||vjob);
	End loop;
	Close C3;
End;
/

SET SERVEROUTPUT OFF