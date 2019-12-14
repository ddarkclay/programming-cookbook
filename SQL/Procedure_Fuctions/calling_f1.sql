SET SERVEROUTPUT ON

Declare
	no number(4);
	r number(4);
Begin
	no := &no;
	r := f1(no);
	if r = 1 then
		dbms_output.put_line('No is divisible by 5');
	else
		dbms_output.put_line('No is not divisible by 5');
	End if;
End;
/

SET SERVEROUTPUT OFF