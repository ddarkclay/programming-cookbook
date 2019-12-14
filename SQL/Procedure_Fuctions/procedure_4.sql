SET SERVEROUTPUT ON

Create OR Replace Precedure proc4(n1 IN Number, n2 OUT Number)
Is
	fact number(10) := 1;
	n1 number;
Begin
	For i in 2..n1
	Loop
		fact := fact * i;
	End Loop;
	n2 := fact;
End proc4;
/

SET SERVEROUTPUT OFF