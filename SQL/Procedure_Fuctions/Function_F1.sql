SET SERVEROUTPUT ON

Create Or Replace Function F1
(eno IN number)
	Return Emp.Sal%TYPE;
AS
	s Emp.Sal%TYPE;

Begin
	Select Sal into s from Emp where Empno = eno;
	Return p_sal;

Exception
	when NO_DATA_FOUND Then
		Dbms_output.put_line('No Data Found');
	
End F1;
/

SET SERVEROUTPUT ON
