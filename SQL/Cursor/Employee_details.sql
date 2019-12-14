SET SERVEROUTPUT ON
Declare
	Cursor C1 IS Select Ename, Sal, Deptno from Emp;
	vname emp.ename%Type;
	vsal emp.sal%Type;
	vdeptno emp.deptno%Type;
Begin
	Open C1;
	Loop
		FETCH C1 into vname, vsal,vdeptno;
		Exit when C1%NOTFOUND;
		Dbms_output.put_line(vname||' '||vsal||' '||vdeptno);
	End loop;
	Close C1;
End;
/

SET SERVEROUTPUT OFF