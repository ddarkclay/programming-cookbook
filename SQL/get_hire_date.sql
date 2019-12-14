SET SERVEROUTPUT ON

Declare
	n Emp.Ename%TYPE;
	hdate Emp.Hiredate%TYPE;
Begin
	n := '&n';
	Select Ename, Hiredate into n,hdate from Emp where Ename = n;
	Dbms_output.put_line(n||' is Hired on : '||hdate);

End;
/

SET SERVEROUTPUT OFF
