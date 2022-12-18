"""
'w': white block
'b': black block
'd': data
'x': ignore
"""

def main():
    
    lst = [
        # 'b' * 5,
        # 'bwwwb',
        # 'bwdwb',
        # 'bwwwb',
        # 'b' * 5,
        
        
        # 'b' * 6,
        # 'bwbbwb',
        # 'b' * 6,
        # 'b' * 6,
        # 'bwbbwb',
        # 'b' * 6
        'bb',
        'bb'
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