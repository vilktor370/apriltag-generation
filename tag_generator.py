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
    # lst = generateMask(2)
    # for i in lst:
    #     print(i)
    