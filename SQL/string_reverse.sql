SET SERVEROUTPUT ON

Declare
	str varchar2(10);
	ch varchar2(3);
	len number(5);
Begin
	str := '&str';
	len := length(str);
	dbms_output.put('Reverse Of String is : ');
	while len>0
	Loop
		ch := substr(str,len,1);
		Dbms_Output.put(ch);
		len := len - 1;
	End loop;
	dbms_output.new_line;
End;
/

SET SERVEROUTPUT OFF