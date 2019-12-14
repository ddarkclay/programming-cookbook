SET SERVEROUT ON

Declare
	n1 number(3);
	n2 number(3);
	
Begin
	n1 := &n1;
	n2 := &n2;
	for i in 1..10
	loop
		for j in n1..n2
		loop
			dbms_output.put_line(i*j);
		End loop;
		dbms_output.new_line;
	End loop;
	
End;
/

SET SERVEROUT OFF
