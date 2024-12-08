while True :
    inp=input("Enter a number")
    nw={"1":"One","2":"Two","3":"Three","4":"Four","5":"Five","6":"Six","7":"Seven","8":"Eight","9":"Nine","10":"Ten","11":"Eleven","12":"Twelve","13":"Thirteen","14":"Fourteen","15":"Fifteen","16":"Sixteen","17":"Seventeen","18":"Eighteen","19":"Nineteen","20":"Twenty","30":"Thirty","40":"Forty","50":"Fifty","60":"Sixty","70":"Seventy","80":"Eighty","90":"Ninty"}
    if len(inp)==1:
        if inp[0] in nw:
            print(nw.get(inp))
    
    else:
        o=str(int(inp[0])*10)
        
        print(o)
        
        if inp[1] in nw:
            print(nw.get(o),' ',nw.get(inp[1]))
