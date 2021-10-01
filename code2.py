for _ in range(int(input())):
    n,k=map(int,input().split())
    l=sorted(list(map(int,input().split())))
    #print(l)
    sum_a=[]
    sum_b=[]
    for i in l:
        if(i>k):
            sum_b.append(i)
        else:
            sum_a.append(i)
    #result=sum(sum_a)
    for i in range(len(sum_b)-1):
        #print(sum_a)
        #print(i)
        if sum_b[i]>k:
            c=sum_b[i]-k
            sum_a.append(k)
            sum_b[i+1]-=c
        elif sum_b[i]==k:
            sum_a.append(sum_b[i])
    sum_a.append(sum_b[-1])
    #print(sum_a)
    print(sum(sum_a))
