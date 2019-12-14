SET SERVEROUTPUT ON
Declare
	no number(5);
	r number(3);
	temp number(5);
	s number(5);
begin
	no := &no;
	temp := no;
	s := 0;
	while no>0
	loop
		r := mod(no,10);
		s := (s*10)+r;
		no := floor(no/10);
	End loop;
	if(temp = s) then
		dbms_output.put_line('The number '||temp||' is Palindrome');	
	else
		dbms_output.put_line('The number '||temp||' is not Palindrome');
	End if;
End;
/
SET SERVEROUTPUT OFF