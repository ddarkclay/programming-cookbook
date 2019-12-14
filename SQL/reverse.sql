SET SERVEROUTPUT ON
Declare
	no number(5);
	r number(5);
	s number(5);
begin
	no := &no;
	s := 0;
	while no>0
	loop
		r := mod(no,10);
		s := (s*10)+r;
		no := trunc(no/10);
	End loop;
		dbms_output.new_line;
		dbms_output.put_line('The Reverse Number is '||s);
End;
/
SET SERVEROUTPUT OFF