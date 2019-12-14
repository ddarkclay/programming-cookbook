SET SERVEROUTPUT ON

Declare
	str varchar2(20);
	len number(5);
	ch varchar2(3);
	
Begin
	str := '&str';
	len := length(str);
	dbms_output.put('Reverse Of String is : ');
	while len>0
	loop
		ch := substr(str,len,1);
		dbms_output.put(ch);
		len := len-1;
	End loop;
	dbms_output.new_line;
End;
/

SET SERVEROUTPUT OFF

