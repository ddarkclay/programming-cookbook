SET SERVEROUTPUT ON

Declare
	Cursor C IS Select Ename,Sal,Deptno from Emp where deptno = 3005;
	vname Emp.Ename%TYPE;
	vsal Emp.Sal%TYPE;
	vdeptno Emp.Deptno%TYPE;
	
Begin
	Open C;
	Loop
		fetch C into vname,vsal,vdeptno;
		Exit when C%NOTFOUND;
			Dbms_output.put_line(vname||'  '||vsal||'  '||vdeptno);
	End loop;
	Close C;
End;
/

SET SERVEROUTPUT OFF
