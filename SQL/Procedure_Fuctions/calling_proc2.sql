SET SERVEROUTPUT ON

Declare
	cno number(5);
	c_job emp.Job%TYPE;
Begin
	Proc2(&cno,c_job);
	if c_job = 'No' then
		dbms_output.put_line('Empno does not Exist');
	else
		dbms_output.put_line('Job is '||c_job);
	End if;
End;
/

SET SERVEROUTPUT OFF