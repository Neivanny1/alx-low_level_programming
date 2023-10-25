#!/usr/bin/python3
"""
Defines island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described
    """
    c = 0
    for x in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[x][j] == 1:
                c = c + 4
                if j - 1 >= 0 and grid[x][j - 1] == 1:
                    c -= 2
                if x - 1 >= 0 and grid[x - 1][j] == 1:
                    c -= 2
    return (c)
