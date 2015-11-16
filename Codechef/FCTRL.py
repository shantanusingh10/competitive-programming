T = int(input(""))
while T:
    S=0
    A = int(input(""))
    for i in range(1,1000000000):
        B = int(A/(5**i))
        if(B==0):
            break
        else:
            S = S + B
    print(S)
    T= T-1
