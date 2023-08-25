#!/usr/bin/python3
def island_perimeter(grid):
    '''
        Calculates the perimeter of an island
        Aguments:
            - grid: A matrix filled with 0, 1 representing a map.
    '''
    water = 0
    land = 1
    perimeter = 0

    for y, level in enumerate(grid):
        for x, parcel in enumerate(level):
            if parcel == land:
                    if x == 0 or grid[y][x - 1] == water:
                        perimeter += 1
                    if (x + 1) == len(level) or grid[y][x + 1] == water:
                        perimeter += 1
                    if y == 0 or grid[y - 1][x] == water:
                        perimeter += 1
                    if (y + 1) == len(grid) or grid[y + 1][x] == water:
                        perimeter += 1

    return perimeter
