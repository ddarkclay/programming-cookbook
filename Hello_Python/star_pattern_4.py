ch = 80
for i in range(65,69):
    for j in range(65,69):
            if j < i+1:
                print(chr(j), end=" ")
            else:
                if ch < 82:
                    print(chr(ch), end=" ")
                    ch = ch + 1;
                else:
                    print(chr(ch), end=" ")
                    ch = ch - 1
    print()
