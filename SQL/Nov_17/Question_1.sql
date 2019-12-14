SET SERVEROUTPUT ON

Declare
	n Emp.Ename%TYPE;

Begin
	Select Ename into n from Emp where Sal = (Select max(sal) from Emp);
	Dbms_output.put_line('Maximum Salary of Employee is : '||n);

End;
/

SET SERVEROUTPUT OFF
