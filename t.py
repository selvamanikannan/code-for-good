# cook your dish here
t=int(input())
final = 0 
for _ in range(t):
    n=int(input())
    res=-400
    arr=[0]*4 
    a=[[0 for i in range(4)] for j in range(4)]
    dic={}
    dic['A']=0 
    dic['B']=1 
    dic['C']=2 
    dic['D']=3 
    for i in range(0,n):
        p,k=input().split()
        k=int(k)
        a[dic[p]][(k//3)-1] += 1 
    for i in range(0,4):
        for j in range(0,4):
            if i==j:
                continue
            for k in range(0,4):
                if(k !=i and k != j):
                    for z in range(0,4):
                        if z!=i and z!=j and z!=k:
                            h=a[i][0]+a[j][1]+a[k][2]+a[z][3]
                            arr[0] = a[i][0]
                            arr[1] = a[j][1]
                            arr[2] = a[k][2]
                            arr[3] = a[z][3]
                            print(arr)
                            arr.sort(reverse=True)
                            h=arr[0]*100 + arr[1]*75 + arr[2]*50 + arr[3]*25 - (arr.count(0)*100)
                            res = max(h,res)
    print(res) 
    final += res 
print(final)