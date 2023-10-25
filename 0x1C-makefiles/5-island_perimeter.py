#!/usr/bin/python3
""" Module contains island_perimeter fuction """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    num = 0
    row = len(grid)
    col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if (i < row and grid[i + 1][j] != 1):
                    num += 1
                if (i > 0 and grid[i - 1][j] != 1):
                    num += 1
                if (j < col and grid[i][j + 1] != 1):
                    num += 1
                if (j > 0 and grid[i][j - 1] != 1):
                    num += 1

    return (num)
