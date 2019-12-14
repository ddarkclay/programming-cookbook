SET SERVEROUTPUT ON;

Declare
	str  VARCHAR2(400);  
    noofvowels     NUMBER := 0;  
    noofconsonants NUMBER := 0;  
    C              CHAR;  
BEGIN 
	str := '&str';
    FOR i IN 1..Length(str) 
    LOOP  
        c := Substr(str, i, 1);  
  
        -- Check if the current character is vowel  
        IF c IN ( 'A', 'E', 'I', 'O', 'U' )  
            OR c IN ( 'a', 'e', 'i', 'o', 'u' ) THEN 
          noofvowels := noofvowels + 1;  
  
        -- Else current character is a consonant except space  
        ELSE 
          IF c NOT IN ( ' ' ) THEN 
            noofconsonants := noofconsonants + 1;  
          END IF;  
        END IF;  
    END LOOP;  
  
    dbms_output.Put_line('No. of Vowels: ' || noofvowels);  
  
    dbms_output.Put_line('No. of Consonants: ' || noofconsonants);  
END;  
/
SET SERVEROUTPUT OFF;
