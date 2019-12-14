SET SERVEROUTPUT ON

Create or Replace Procedure P1
(eno IN number)
AS
	nm Emp.Ename%Type;
	s Emp.Sal%Type;

Begin
	Select Ename,Sal into nm, s from Emp where Empno = eno;
	Dbms_output.put_line(eno||'   '||nm||'   '||s);

End P1;
/

SET SERVEROUTPUT ON
