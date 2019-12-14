SET SERVEROUTPUT ON

Declare
	r number(5);
	s number(5);
	t number(5);
	n number(3);
Begin
	For i in 1..500
	Loop
		n := i;
		s := 0;
		t := n;
		while n>0
		Loop
			r := mod(n,2);
			s := (s*10)+(r*r*r);
			n := trunc(n/10);
		End Loop;
		
		if (s = t) Then
			Dbms_output.put_line(i);
		End If;
		
	End Loop;
End;
/

SET SERVEROUTPUT OFF
