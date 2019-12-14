SET SERVEROUTPUT ON

Declare
	n number(5);
	r number(5);
	rev number(5);

Begin
	n := &n;
	rev := 0;
	while n > 0
	Loop
		r := mod(n,10);
		rev := (rev  * 10)+r;
		n := floor(n/10);
	End Loop;
	Dbms_output.put_line('Reverse Number is : '||rev);
End;
/

SET SERVEROUTPUT OFF
