SET SERVEROUTPUT ON

Create OR Replace Function f2(fnum number)
	Return number;
IS
	vsal emp.sal%TYPE;
Begin
	Select Sal into vsal from emp where empno = fnum;
	If SQL%FOUND Then
		Return(vsal);
	Else
		Return 0;
	End If;
End f2;
/

SET SERVEROUTPUT OFF