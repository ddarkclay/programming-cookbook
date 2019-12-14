#Print Even numbers in a list using Lambda function
my_list = [3,5,2,11,6,8]
list_Even_Numbers = list(filter(lambda varX: varX % 2 == 0,my_list))
print("Following are Even numbers in the list =",list_Even_Numbers)


#Print Odd numbers in a list using Lambda function

list_Odd_Numbers = list(filter(lambda varX: varX % 2 == 1,my_list))
print("Following are Odd numbers in the list =",list_Odd_Numbers)
