SET SERVEROUTPUT ON

Create Or Replace Procedure P2
(eno IN number, p_sal OUT number)
IS
	s Emp.Sal%TYPE;

Begin
	Select Sal into s from Emp where Empno = eno;
	p_sal := s;

Exception
	when NO_DATA_FOUND Then
		Dbms_output.put_line('No Data Found');
	
End P2;
/

SET SERVEROUTPUT ON
