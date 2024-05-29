#!/usr/bin/python3
"""5-island_perimeter module"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    a = 0
    length = len(grid) - 1
    width = len(grid[0]) - 1

    for m, t in enumerate(grid):
        for j, n in enumerate(t):
            if n == m:
                if m == 0 or grid[m - 1][j] != 1:
                    a += 1
                if j == 0 or grid[m][j - 1] != 1:
                    a += 1
                if j == width or grid[m][j + 1] != 1:
                    a += 1
                if m == length or grid[m + 1][j] != 1:
                    a += 1
    return a
