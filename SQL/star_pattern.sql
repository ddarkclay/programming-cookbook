SET SERVEROUTPUT ON
Begin 
	for i in 1..4
	loop
		for j in 1..i
		loop
			dbms_output.put('*');	
		End loop;
		dbms_output.new_line;
	End loop;
End;
/
SET SERVEROUTPUT OFF