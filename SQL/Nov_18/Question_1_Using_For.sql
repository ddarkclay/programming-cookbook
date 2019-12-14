Set SERVEROUTPUT ON

Declare
	Cursor C1 IS Select Ename,job,sal from Emp;
	
Begin
	For i in C1
	Loop
		Dbms_output.put_line(i.ename||'    '||i.job||'    '||i.sal);
	End Loop;
End;
/

SET SERVEROUTPUT OFF
