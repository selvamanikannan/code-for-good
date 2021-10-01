from collections import defaultdict

def ShowGraph(adj):
    print("Given graph : ")
    for node, dest in adj.items():
        if(len(dest)==0):
            continue
        print(node, end = " : ")
        for pair in dest:
            print(pair, end = " ")
        print()

def search(adj, curr, depth, target):
    if(depth == 0):
        return False
    
    print(curr, end = " ")
    
    if(curr == target):
        return True
    
    for node in adj[curr]:
        if(search(adj, node, depth-1, target) == True):
            return True
            

def iter_deep_search(adj, src, target):
    depth = 1
    while True:
        print("depth = ", depth, ":")
        if(search(adj, src, depth, target) == True):        
            print("found")
            break
        else:
            depth += 1
            print()
        

if __name__ == "__main__":
    adj = defaultdict(list)
    edges=int(input("Enter No of Edges:"))
    for _ in range(edges):
        u,v=input().split()
        adj[u].append(v)
    ShowGraph(adj)
    src, target = input('Enter Source and Target:').split()
    iter_deep_search(adj, src, target)
    