SET SERVEROUTPUT ON

Declare
	Cursor C IS Select Ename,Sal,Deptno from Emp where deptno = 3005;
	
Begin
	for i in C
	Loop
		Dbms_output.put_line(i.Ename||'  '||i.Sal||'  '||i.Deptno);
	End loop;
End;
/

SET SERVEROUTPUT OFF
