SET SERVEROUTPUT ON
Declare
	Cursor Comm IS Select Ename, Job from Emp where Comm IS NULL;
	vname emp.ename%Type;
	vjob emp.job%Type;
Begin
	Open Comm;
	Loop
		FETCH Comm into vname, vjob;
		Exit when Comm%NOTFOUND;
		Dbms_output.put_line(vname||' : '||vjob);
	End loop;
	Close Comm;
End;
/

SET SERVEROUTPUT OFF