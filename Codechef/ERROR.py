T = int(input(""))
while T:
    S = input("")
    B = S.count("101")
    G = S.count("010")
    if B or G :
        print("Good")
    else :
        print("Bad") 
    T=T-1
