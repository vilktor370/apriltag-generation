"""
'w': white block
'b': black block
'd': data
'x': ignore
"""

def main():
    
    lst = [
        'd' * 5,
        'd' + 'b' *3 + 'd',
        'dbwbd',
        'd' + 'b' *3 + 'd',
        'd'*5,
    ]
    print('Check shape:')
    for i in lst:
        print('\t' + i)
    print("Output")
    output = ''.join(lst)
    print('\t' + output)
    print("Columns:", len(lst[0]))
    print("Rows:", len(lst))
    print("Number of data bits d:", output.count('d'))
    

if __name__=='__main__':
    main()