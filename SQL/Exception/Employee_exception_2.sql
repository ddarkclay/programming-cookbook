SET SERVEROUTPUT ON

Declare
	mno number(10);
Begin
	mno := &mno;
	Select empno into mno from Emp where empno = mno;
	dbms_output.put_line('Employee is Found');
Exception
	When NO_DATA_FOUND Then
		dbms_output.put_line('Employee Do not Found');
End;
/

SET SERVEROUTPUT OFF