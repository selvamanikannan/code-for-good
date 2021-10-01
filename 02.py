for _ in range(int(input())):
	m,n=map(int,input().split())
	b=list(map(int,input().split()))
	sol=[0]*(m+1)
	flag=0
	for x in range(0,len(b)):
		sol[b[x]]+=1
		for y in range(1,len(sol)):
			if sol[b[x]] < sol[y]-1 or sol[b[x]] > sol[y]+1:
				flag=1;
				break
	if(flag==1):
		print("NO")
	else:
		print("YES")