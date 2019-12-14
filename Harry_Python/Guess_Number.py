final = 18;
guess = 0;
while guess < 9:
    guess += 1
    num = int(input("Enter a Number : "))
    if guess == 0:
        print("Game Over !!!")
        break
    elif final < num:
        print(str(num) + " is Larger than Final Number")
        print(str(9-guess) + " Guesses are Remaining.\n")
        continue
    elif final > num:
        print(str(num) + " is Smaller than Final Number")
        print(str(9-guess) + " Guesses are Remaining.\n")
        continue
    elif final == num:
        print("You Won The Match")
        print(str(num) + " is Same than Final Number")
        print(str(guess)+" Guesses You take to Finsh Game .\n")
        break
