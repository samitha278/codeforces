def main():


    n = int(input())

    p = 0

    while n:

        line = input().split()

        k = line.count("1")

        if k>=2:
            p+=1


        n-=1

    print(p)


if __name__=="__main__":
    main()
