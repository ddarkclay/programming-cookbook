SET SERVEROUT ON

Declare
	n number(3);
	
Begin
	n := &n;
	for i in 1..10
	loop
		dbms_output.put_line(n*i);
	End loop;
	
End;
/

SET SERVEROUT OFF
