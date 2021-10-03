for _ in range(int(input())):
	n=int(input())
	arr=list(map(int,input().split()))
	arr.sort()

	sol=0

	for i in range(1,n):
		if((i==n-1) and (arr[i-1]-arr[i] == 1)):
			continue			
		elif(arr[i]-arr[i+1]==1 or arr[i-1]-arr[i] == 1 ):
			continue
		else:
			sol+=1
	print(sol)
