SET SERVEROUTPUT ON
Declare
	Cursor C2 IS Select Ename, Sal, Deptno from Emp where deptno  = 3005;
	vname emp.ename%Type;
	vsal emp.sal%Type;
	vdeptno emp.deptno%Type;
Begin
	Open C2;
	Loop
		FETCH C2 into vname, vsal,vdeptno;
		Exit when C2%NOTFOUND;
		Dbms_output.put_line(vname||' '||vsal||' '||vdeptno);
	End loop;
	Close C2;
End;
/

SET SERVEROUTPUT OFF