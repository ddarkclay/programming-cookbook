package mypackage;

public class Palindrome
{
  public boolean test(String s)
  {
    char givenstring[];
    char reverse[] =new char[s.length()];
    boolean flag = true;
    int i=0, j=0;
    givenstring = s.toCharArray();
    for( i=s.length() -1; i>=0;i--)
    {
      reverse[j] = givenstring[i];
      j++;
    }
    for(i=0;i<s.length();i++)
    {
      if(reverse[i]!=givenstring[i])
         flag = false;
    }
   return flag;
  }
}