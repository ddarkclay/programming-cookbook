SET SERVEROUT ON

Declare
	n1 number(3);
	n2 number(3);
	s number(5) :=0;
Begin
	n1 := &n1;
	n2 := &n2;
	s := n1+n2;
	dbms_output.put_line('Addition of Numbers is : '||s);
	dbms_output.put_line('Multiplicationtion of Numbers is : '||n1*n2);
End;
/

SET SERVEROUT OFF
