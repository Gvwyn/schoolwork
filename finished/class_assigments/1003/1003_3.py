nums = [2, 3, 5, 7, 11, 13, 17, 19]

for x in range(len(nums)):
    for y in range(16):
        if y == 0: continue
        print(nums[x]*y, end=' ')
    print('')