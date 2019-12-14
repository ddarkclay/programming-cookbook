SET SERVEROUTPUT ON

Declare
	msal number(10,2);
	Negative_Sal Exception;
Begin
	Select Sal into msal from Emp where empno = 103;
	if msal < 0 then
		RAISE Negative_Sal;
else
		Update Emp set Sal = Sal + 5000 where empno = 103;
	End if;
Exception
	When Negative_Sal Then
		dbms_output.put_line('Employee Do not Found');
End;
/

SET SERVEROUTPUT OFF