SET SERVEROUT ON

Begin
	for i in 1..6
	Loop
		if mod(i,2) = 0 then
			dbms_output.put_line(i);
		End if;
	End loop;
End;
/

SET SERVEROUT OFF
