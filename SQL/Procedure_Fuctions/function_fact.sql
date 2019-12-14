SET SERVEROUTPUT ON

Create OR Replace Function f3(f_no Number)
	Return number
AS
	fact number(10) := 1;
Begin
	For i in 1..f_no
	Loop
		fact := fact * i;
	End Loop;
	Return fact;
End f3;
/

SET SERVEROUTPUT OFF