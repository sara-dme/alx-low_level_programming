#!/usr/bin/python3


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid"""
    num = 0
    for row in grid:
        for col in row:
            if col == 1:
                num += 1
    return ((num * 2) + 2)
