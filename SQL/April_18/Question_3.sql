SET SERVEROUT ON

Declare
	n number(3);
Begin
	n := &n;
	dbms_output.put_line('Square of '||n||' is : '||n*n);
End;
/

SET SERVEROUT OFF
