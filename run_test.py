import subprocess
import os
import sys

exe = './' + sys.argv[1]
output = sys.argv[2]

unitPairs = [['Bela.txt', 'Janos.txt'],
             ['Bela.txt', 'Terminator.txt'],
             ['Janos.txt', 'Terminator.txt'],
             ['Janos.txt', 'Bela.txt'],
             ['Terminator.txt', 'Bela.txt'],
             ['Terminator.txt', 'Janos.txt'],

with open(output, 'w') as output_f:
    for pair in unitPairs:
        args = [exe, pair[0], pair[1]]
        subprocess.call(args,
                        stdout=output_f, stderr=output_f)