def main():

    n,k =  list(map(int,input().split()))

    scores = list(map(int,input().split()))

    s = scores[k-1]

    c = len([i for i in scores if (i>0)  and (i >= s) ])

    print(c)

main()
