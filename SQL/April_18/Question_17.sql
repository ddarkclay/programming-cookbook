SET SERVEROUT ON

Declare
	Larger Exception;
	Smaller Exception;
	n1 number(3);
	n2 number(3);
	
Begin
	n1 := &n1;
	n2 := &n2;
	if n1<=1 OR n1>=200 Then
		RAISE Larger;
	elsif n2<=1 OR n2>=10 Then
		RAISE Smaller;
	else
		if mod(n1,n2) = 0 then
			dbms_output.put_line(n1||' is Divisible by '||n2);
		else
			dbms_output.put_line(n1||' is Not Divisible by '||n2);
		End if;
	End if;	
Exception
	when Larger then
		dbms_output.put_line('First Number Must in Between 1 to 200');
	when Smaller then
		dbms_output.put_line('Second Number Must in Between 1 to 10');
End;
/

SET SERVEROUT OFF
