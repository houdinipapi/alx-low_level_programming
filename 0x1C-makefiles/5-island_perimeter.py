#!/usr/bin/python3


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described by the given grid.

    Args:
        grid (list of list of int): A rectangular grid of 0s and 1s, where 0 represents
        water and 1 represents land. The grid is completely surrounded by water,
        and there is only one island (or nothing). The island doesn't have "lakes"
        (water inside that isn't connected to the water around the island).

    Returns:
        int: The perimeter of the island.

    """

    perimeter = 0
    edges = 0
    height = len(grid)
    width = len(grid[0])

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 1

                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1:
                    edges += 1

    return perimeter * 4 - edges * 2
