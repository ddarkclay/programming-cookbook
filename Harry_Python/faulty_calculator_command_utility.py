import argparse
import sys

def calculate(args):
    if args.o == "+":
        if args.x == 56 and args.y == 9:
            return 77
        else:
            return args.x + args.y
    elif args.o == '*':
        if args.x == 45 and args.y == 3:
            return 555
        else:
            return args.x * args.y
    if args.o == '/':
        if args.x == 56 and args.y == 6:
            return 4
        else:
            return args.x / args.y


if __name__ == '__main__':
    parser = argparse.ArgumentParser()
    parser.add_argument('--o', type=str, default='+', help='Enter Sign of Operation : ')
    parser.add_argument('--x',type=float,default=1.0,help='Enter First Number : ')
    parser.add_argument('--y', type=float, default=1.0, help='Enter Second Number : ')

    args = parser.parse_args()
    sys.stdout.write(str(calculate(args)))
    print()