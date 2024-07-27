blocks = int(input())
heights = sorted([int(x) for x in input().split()])
max_height_index = blocks-1
max_height = heights[max_height_index]
start_index = 0
count = 0
mod = 0
while blocks > 0:
    count += 1
    if max_height-mod >= blocks:
        max_height_index -= 1
        blocks -= 1
        max_height = heights[max_height_index]
    else:
        mod += 1
        while start_index <= max_height_index and heights[start_index]-mod == 0:
            start_index += 1
        blocks = max_height_index - start_index + 1
print(count)