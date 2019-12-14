SET SERVEROUTPUT ON

Declare
	no number(3);
Begin
	no:=&no;
	if mod(no,2) = 0 Then
		Dbms_output.put_Line(no||' is Even Number');
	else
		Dbms_output.put_Line(no||' is Odd Number');
	End if;
End;
/

SET SERVEROUTPUT OFF 
