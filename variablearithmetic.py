variables = dict()

while True:
    line = input()
    s = 0
    if line == '0':
        break
    if '=' in line:
        key,value = line.split('=')
        variables[key.strip()] = value.strip()
        continue
    vars = line.split('+')
    for i in range(len(vars)):
        vars[i] = vars[i].strip()

    for i in range(len(vars)):
        s = 0
        string = []
        for var in vars:
            if var.isnumeric():
                s += int(var)
            elif var in variables:
                s += int(variables[var])
            else:
                string += [var]
                # print(string)
    if len(string) == 0:
        print(s)
    else:
        if s != 0:
            print(str(s),end = ' + ')
        for i in range(len(string)):
            if i != len(string) - 1 :
                print(string[i], end = ' + ')
            else:
                print(string[i])