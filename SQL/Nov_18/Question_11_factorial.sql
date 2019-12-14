SET SERVEROUTPUT ON

Declare
	no number(3);
	fact number(6);

Begin
	no := &no;
	fact := 1;
	for i  in 1..no
	Loop
		fact := fact*i;
	End Loop;
	Dbms_output.new_line;
	Dbms_output.put_line('The Factorial of '||no||' is '||fact);
End;
/

SET SERVEROUTPUT OFF
