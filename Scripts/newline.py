with open('g.ngc', 'r') as f:
    contents = f.read()

with open('g.ngc', 'w') as f:
    f.write(contents.replace('G1', '.\n'))
