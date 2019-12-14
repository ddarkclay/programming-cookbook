/*
  As requested, I have refactored
    my boredom application to
    allow custom input.

  INPUT: a line of text
    containing alpha characters.
    Leave blank for a demo
    message.

  Currently, only letters are
    available. Non-alpha
    characters will be displayed
    as blanks.
    
  Output will wrap after 4
    letters.

  -- Love, Jamie
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

#define LetRows  6 // bits tall
#define LetCols  5 // bits wide
#define WrdCols  4 // word wrap

const int LETTERS[] =
{
  0x0118FE2E, 0x00F8BE2F, // A, B
  0x00E8862E, 0x00F8C62F,
  0x01F0BC3F, 0x0010BC3F,
  0x00E8E42E, 0x0118FE31,
  0x01F2109F, 0x0064A11E,
  0x01149D31, 0x01F08421,
  0x0118D771, 0x011CD671,
  0x00E8C62E, 0x0010BE2F,
  0x01ECC62E, 0x0118BE2F,
  0x00F8383E, 0x0042109F,
  0x00E8C631, 0x00454631,
  0x011DD631, 0x01151151,
  0x00421151, 0x01F1111F, // Y, Z
  // blank
  0x00000000
};

const int OUTPUT[] =
{
  0xB0, // background
  0xDB  // foreground
};

void writeLetterRow(char c, int row)
{
  int l;
  if (isalpha(c))
    l = toupper(c) - 65;
  else
    l = 26; // blank
    
  int let = LETTERS[l];

  for (int col = 0;
       col < LetCols;
       col++)
  {
    int s = LetCols * row + col;
    int b = let >> s & 1;
    cout << char(OUTPUT[b]);
  }

  cout << char(OUTPUT[0]);
}

void writeWordRow(string s)
{
  for (int row = 0;
       row < LetRows;
       row++)
  {
    for (char &c : s)
      writeLetterRow(c, row);

    cout << endl;
  }
}

int main()
{
  string str;
  getline(cin, str);
  
  if (str.empty())
    str.assign("demo");

  for (int i = 0;
       i < str.length();
       i += WrdCols)
  {
    string s =
      str.substr(i, WrdCols);
    writeWordRow(s);
  }

  return 0;
}
