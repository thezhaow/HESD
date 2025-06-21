#!/usr/bin/env python3

'''
Copyright (C) 2025 Zhao Wei Wang
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <https:www.gnu.org/licenses/>.
'''

import builtins
import numpy as np
import string
from collections import defaultdict

# set flushing as default
print = lambda *args, **kwargs: builtins.print(*args, flush=True, **kwargs)

class CharDist:
    def __init__(self, outfile = "outfile.txt"):
        # printable characters
        self.printable_chars = string.printable[:94]
        # create a 94x94
        self.final_array = np.zeros((94, 94), dtype=float)
        # create a dictionary to match
        self.char_map = defaultdict(lambda:len(self.char_map))
        # populates dictionary
        for key in self.printable_chars: self.char_map[key]
        # output file name
        self.outfile = outfile

    def fill_values(self):
        # print(self.char_map)
        # print(self.final_array)
        pass

    def export(self):
        with open(self.outfile, "w") as f:
            # writes out printable chars first
            f.write(self.printable_chars+"\n")
            # writes out array second
            for row in self.final_array:
                f.write(" ".join(map(str, row)) + "\n")

def main():
    cd = CharDist()
    cd.fill_values()
    cd.export()

if __name__ == "__main__":
    main()

#string similarity = total value/ max num chars