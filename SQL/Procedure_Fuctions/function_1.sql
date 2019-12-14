SET SERVEROUTPUT ON

Create OR Replace Function f1(fnum number)
	Return number
As

Begin
	if mod(fnum,5) = 0 then
		Return 1;
	Else
		Return 0;
	End if;
End F1;

/

SET SERVEROUTPUT OFF