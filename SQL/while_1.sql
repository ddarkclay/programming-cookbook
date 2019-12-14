SET SERVEROUTPUT ON
Declare
	i number(3);
begin
	i:=1;
	while i<10
	loop
		i:=1+i;
		Dbms_output.put_line(i);
	End loop;
End;
/
SET SERVEROUTPUT OFF
	