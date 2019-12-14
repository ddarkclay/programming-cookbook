SET SERVEROUT ON

Declare
	n1 number(3);
	n2 number(3);
Begin
	n1 := &n1;
	n2 := &n2;
	for i in n1..n2
	Loop
		if mod(i,2) = 0 then
			dbms_output.put_line(i);
		End if;
	End loop;
End;
/

SET SERVEROUT OFF
