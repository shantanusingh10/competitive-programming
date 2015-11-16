T = int(input(""))
while(T!=0):
    number = int(input(""))
 
    product = 1
    for i in range(number):
        product = product * (i+1)
 
    print(product)
    T = T-1
