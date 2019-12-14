SET SERVEROUT ON

Declare
	n number(3);
Begin
	n := &n;
	if n > 0 then
		dbms_output.put_line(n||' is Positive Number');
	else
		dbms_output.put_line(n||' is Negative Number');
	End if;
End;
/

SET SERVEROUT OFF
