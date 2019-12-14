SET SERVEROUT ON

Declare
	n number(3);
Begin
	n := &n;
	if mod(n,2) = 0 then
		dbms_output.put_line(n||' is Even Number');
		dbms_output.put_line('Square of '||n||' is : '||n*n);
	else
		dbms_output.put_line(n||' is Odd Number');
		dbms_output.put_line('Cube of '||n||' is : '||n*n*n)
;	End if;
End;
/

SET SERVEROUT OFF
