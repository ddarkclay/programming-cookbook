SET SERVEROUTPUT ON

Declare
	nm Emp.Ename%TYPE;
	Dno Emp.DeptNo%TYPE;
	s Emp.Sal%TYPE;

Begin
	Dbms_output.put_line('Ename DeptNo Sal');
	Dbms_output.put_line('----- ------ ----');
	Select Ename, Deptno, Sal into nm, Dno,s from Emp where sal = (Select max(sal) from Emp);
	Dbms_output.put_line(nm||'  '||Dno||'  '||s);
End;
/

SET SERVEROUTPUT OFF
