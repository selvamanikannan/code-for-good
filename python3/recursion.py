# Simple recursion program in python
def fun(n):
	""" This method prints the number in reverse order n to 1"""
	if n==0:
		return
	print(n)
	fun(n-1)

if __name__ == '__main__':
	n = int(input("Enter Number:"))
	fun(n)