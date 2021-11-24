#!/usr/bin/env python

import sys
import random

"""Generator of commands for the ETNA optimization rush.
"""

__author__ = "Remy SAISSY (remy.saissy@epitech.net)"
__version__ = "$Revision: 1.0 $"
__date__ = "$Date: 2009/14/06 11:45:0 $"
__copyright__ = "Copyright (c) 2009 Remy SAISSY"
__license__ = "GPL"

def     generate_hashtable_commands(number_of_keys, number_of_entries, output_filename):
    # Generate keys.
    keys = []
    for cnt in range(0, number_of_keys):
        keys.append(random.randint(0, sys.maxint))
    # Generate commands.
    lines = []
    for cnt in range(0,number_of_entries):
        # Choose a key among the valid set.
        line = str(random.randint(0, number_of_keys))
        # Check wether this will be an insert or lookup order.
        if random.randint(0, sys.maxint) % 3 == 0:
            line += ' ' + str(random.randint(0, sys.maxint))
        elif random.randint(0, sys.maxint) % 5 == 0:
            line += ' D'
        line += '\n'
        lines.append(line)
    f = open(output_filename, 'w')
    f.writelines(lines)
    f.close()
    

if __name__ == "__main__":
    generate_hashtable_commands(100, 10000, 'small-commands.lst')
    generate_hashtable_commands(500, 100000, 'medium-commands.lst')
    generate_hashtable_commands(5000, 1000000, 'big-commands.lst')
    generate_hashtable_commands(10000, 8000000, 'huge-commands.lst')
