SET SERVEROUTPUT ON
declare
	msalary EMP.Sal%TYPE;
	mname EMP.ename%TYPE;
	mno Emp.empno%TYPE;
begin
	mno := &mno;
	Select ename,sal into mname,msalary from emp where empno = mno;
	dbms_output.put_line('Salary of '||mname||' is : '||msalary);
End;
/
Set SERVEROUTPUT OFF