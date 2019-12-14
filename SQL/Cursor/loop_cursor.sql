SET SERVEROUTPUT ON
Declare
	Cursor Cdept IS Select Ename,Job from Emp Order By Empno;
Begin
	For i in Cdept
	Loop
		Dbms_output.put_line(i.ename||' : '||i.job);
	End Loop;
End;
/

SET SERVEROUTPUT OFF