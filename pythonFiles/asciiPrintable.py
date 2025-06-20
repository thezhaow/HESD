#!/usr/bin/env python3

import builtins
import numpy as np
import string
from collections import defaultdict

# set flushing as default
print = lambda *args, **kwargs: builtins.print(*args, flush=True, **kwargs)

class CharDist:
    def __init__(self):
        # printable characters
        self.printable_chars = string.printable[:94]
        # create a 94x94
        self.final_array = np.zeros((94, 94), dtype=float)
        # create a dictionary to match
        self.char_map = defaultdict(lambda:len(self.char_map))
        # populates dictionary
        for key in self.printable_chars: self.char_map[key]

    def fill_values(self):
        print(self.char_map)
        print(self.final_array)

def main():
    cd = CharDist()
    cd.fill_values()

if __name__ == "__main__":
    main()

#string similarity = total value/ max num chars