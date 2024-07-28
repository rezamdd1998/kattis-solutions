inp = [sum(map(int,input().split())) , sum(map(int,input().split()))]
if inp[0] > inp[1] : 
    print("Gunnar")
elif inp[1] > inp[0]:
    print("Emma")
else:
    print("Tie")