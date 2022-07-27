T = int(input())
while(T):
    N = int(input())
    A = list(map(int,input().split()))
    checked = []
    count_el = []
    for i in A:
        if i in checked:
            continue
        else:
            count_el.append(A.count(i))
            checked.append(i)
    max_cel = 1
    secmax = 1
    for i in count_el:
        if(i>=max_cel):
            secmax = max_cel
            max_cel = i
    if(max_cel==N):
        print(max_cel//2+1)
    elif(max_cel==1):
        print(1)
    elif(secmax>(max_cel//2)):
        print(secmax)
    else:
        print(max_cel//2)
    
    T-=1
