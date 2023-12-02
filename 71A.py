class Solution:

    def main():
        n = int(input())

        lst = []

        for i in range(n):
            lst.append(input())

        for i in range(n):
            line = lst[i]
            l = len(line)

            if l>10:
                print(line[0]+ str(l-2)+line[-1])
            else:
                print(line)



if __name__=="__main__":
    sol = Solution.main()
         
