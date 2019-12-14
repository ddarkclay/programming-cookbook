SET SERVEROUTPUT ON

Declare
	str1 varchar2(20);
	str2 varchar2(20);
	
Begin
	str1 := '&str1';
	str2 := '&str2';

	if str1 = str2 then
		dbms_output.put_line('Both Strings are Equal .');
	else
		dbms_output.put_line('Both Strings are Not Equal .');
	end if;
End;
/

SET SERVEROUTPUT OFF
