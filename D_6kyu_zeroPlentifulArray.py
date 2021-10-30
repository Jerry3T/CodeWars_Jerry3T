#https://www.codewars.com/kata/59e270da7997cba3d3000041

def zero_plentiful(arr):
    totalCount = 0;
    i = 0;
    while i < len(arr):
        flag = False
        count = 0
        if arr[i] == 0:
            for z in range(i, len(arr)):
                if arr[z] == 0:
                    count+=1
                else:
                    i = z
                    flag = True
                    break
            if count < 4:
                return 0
            if count >= 4:
                totalCount+=1
            if flag == False and count >= 4:
                return totalCount
        else:
            i+=1
    return totalCount
