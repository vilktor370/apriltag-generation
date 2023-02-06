"""
'w': white block
'b': black block
'd': data
'x': ignore
"""
def generateMask(n):
    from numpy import arange, meshgrid
    tq = arange(-n/2,n/2+1)
    xq,yq = meshgrid(tq,tq)
    tc = arange(-(n-1)/2,(n-1)/2+1)
    xc,yc = meshgrid(tc,tc)
    z = xc + 1j*yc
    q_rt = tq.max()+1j*tq
    m_rt = [ (z/qk).real >= 0 for qk in q_rt ]
    return m_rt

def main():
    
    lst = [
        'bbwwbwwwbw',
        'wwwwwbwwwb',
        'wwddddddww',
        'wwdbbbbdww',
        'bwdbwwbdbw',
        'wbdbwwbdwb',
        'wwdbbbbdww',
        'wwddddddww',
        'bwwwbwwwww',
        'wbwwwbwwbb'
    ]
    # lst= [
    #     'dwwwd',
    #     'wbbbw',
    #     'wbwbw',
    #     'wbbbw',
    #     'dwwwd'
    # ]
    print('Check shape:')
    for i in lst:
        print('\t' + i)
        # print(len(i))
    print("Output")
    output = ''.join(lst)
    print('\t' + output)
    print("Columns:", len(lst[0]))
    print("Rows:", len(lst))
    print("Number of data bits d:", output.count('d'))
    

if __name__=='__main__':
    main()
    # lst = generateMask(2)
    # for i in lst:
    #     print(i)
    