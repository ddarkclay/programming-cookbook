SET SERVEROUTPUT ON

Declare
	nm varchar2(20);
Begin
	nm := '&nm';
	dbms_output.put_line('Hello World '||nm);
End;

/

SET SERVEROUTPUT OFF