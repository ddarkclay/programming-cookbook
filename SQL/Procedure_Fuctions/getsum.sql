SET SERVEROUTPUT ON

Create OR REPLACE FUNCTION GetSum(num1 NUMBER, num2 NUMBER)
	RETURN NUMBER
IS
	BEGIN
		RETURN num1 + num2;
End;
/

SET SERVEROUTPUT OFF