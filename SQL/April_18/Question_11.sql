SET SERVEROUT ON

Declare
	n number(3);
Begin
	n := &n;
	if mod(n,5) = 0 then
		dbms_output.put_line('The Number '||n||' is Divisible by 5');
	else
		dbms_output.put_line('The Number '||n||' is Not Divisible by 5');
	End if;
End;
/

SET SERVEROUT OFF
