SET SERVEROUTPUT ON
Declare
        no number(3);
	fact number(5);
Begin 
        no := &no;
	fact := 1;
	for i in 1..no
	loop
		fact := fact * i;
	End loop;
	dbms_output.put_line('Factorial of '||no||' is : '||fact);
End;
/
SET SERVEROUTPUT OFF