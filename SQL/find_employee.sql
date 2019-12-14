SET SERVEROUTPUT ON



Declare
	
	mdeptno emp.deptno%Type;
	
total number(3);

Begin
	
	mdeptno := &mdeptno;
	
	Select count(*) into total from emp where deptno = mdeptno;
	
	Dbms_output.put_line('No of Employees '||total);

End;

/

SET SERVEROUTPUT OFF
