# https://www.codechef.com/problems/CLEANUP

# cook your dish here
t = int(input())
while(t>0):
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    nn=[]
    for k in range(1,n+1):
        nn.append(k)
    for i in a:
        nn.remove(i)
        
    print(*nn[::2])
    print(*nn[1::2])
   
    t -= 1
