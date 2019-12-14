# def operation(operator,seperated_num):
#
#     mul = 1
#
#     return result

operator = input("Enter +,-,*,/ : ")
total_num = int(input("How many number do you enter : "))
nums = input("Enter Numbers seperated by (,) : ")
seperated_num = nums.split(",")
print(seperated_num)
add, sub, mul, div = 0,0,1,0

for i in range(total_num):
    if operator == '+':
        sum(int(seperated_num))
        print("Addition is : ",sum)
    elif operator == '-':
        sub -= int(seperated_num[i])
    elif operator == '*':
        mul *= int(seperated_num[i])
    elif operator == '/':
        div /= int(seperated_num[i])
    else:
        print("Wrong Input")
        break
# result = add,sub,mul,div
# print("Result is : ",result)