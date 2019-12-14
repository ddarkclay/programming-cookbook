SET SERVEROUTPUT ON

Declare
	no number(5) := &no;
	s number(5);
begin
	P2(no,s);
	dbms_output.put_line('Salary is '||s);
End;
/

SET SERVEROUTPUT ON
