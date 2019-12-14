SET SERVEROUTPUT ON
begin
	for i in 1..20
	loop
		Dbms_output.put_line(i);
	End loop;
End;
/
SET SERVEROUTPUT OFF
	