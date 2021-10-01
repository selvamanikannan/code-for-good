import  math
for _ in range(int(input())):
	a,b,c,d,k=map(int,input().split())
	r1=math.ceil(a/c)
	r2=math.ceil(b/d)
	if(r1+r2<=k):
		print(r1,r2)
	else:
		print(-1)
