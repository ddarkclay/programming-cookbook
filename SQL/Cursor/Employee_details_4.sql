SET SERVEROUTPUT ON;

Declare
	Cursor C IS Select Ename, Job, Mgr from Emp where mgr = (Select Empno from Emp where Ename = 'Jignesh');
	nm Emp.Ename%TYPE;
	jb Emp.Job%TYPE;
	mg Emp.Mgr%TYPE;
	
Begin
	Dbms_output.put_line('Ename      Job      MGR');
	Dbms_output.put_line('-------  -------   -------');
	Open C;
	Loop
		Fetch C into nm, jb, mg;
		Exit when C%NOTFOUND;
		Dbms_output.put_line(nm||'    '||jb||'    '||mg);
	End loop;
End;
/
SET SERVEROUTPUT ON

