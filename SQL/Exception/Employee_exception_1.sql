SET SERVEROUTPUT ON

Declare
	msal number(10,2);
Begin
	Select Sal into msal from Emp where empno <= 116;
	if msal > 22000 then
		Update Emp set Sal = Sal + 2000 where empno >= 103;
	else
		Update Emp set Sal = Sal + 5000 where empno >= 103;
	End if;
Exception
	When NO_DATA_FOUND Then
		dbms_output.put_line('Employee Do not Found');
	When TOO_MANY_ROWS Then
		dbms_output.put_line('No Rows Selected');
End;
/

SET SERVEROUTPUT OFF