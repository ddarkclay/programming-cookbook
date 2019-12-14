SET SERVEROUTPUT ON

DECLARE
	str VARCHAR2(15);
	len number;
BEGIN
	str := '&str';
	len :=0;
	WHILE substr(str,len + 1,1) IS NOT NULL
	LOOP
		len := len +1;
	End loop;
	Dbms_output.put_line('Length of '||str||' is : '||len);
End;
/	

SET SERVEROUTPUT OFF








