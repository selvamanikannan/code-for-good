for _ in range(int(input())):
	n=int(input())
	arr=list(map(int,input().split()))
	di=[0]*(n+1)
	di[0]=arr[0]
	for i in range(1,n):
		di[i]=arr[i]-arr[i-1]
	solu=str(arr[0])
	ct=0
	for i in range(1,n):
		if(di[i]==1):
			ct+=1
		else:
			if(ct>=2):
				solu+='...'+str(arr[i-1])+','+str(arr[i])
				ct=0
			elif(ct==1):
				solu+=','+str(arr[i-1])+','+str(arr[i])
				ct=0
			else:
				solu+=','+str(arr[i])

	if(ct==1):
		solu+=','+str(arr[n-1])
	elif(ct>=2):
		solu+='...'+str(arr[n-1])
		
	print(solu)	