function joinedLogger(level, sep) {
    let s=[]
    return function(...msg)
    {
        msg.forEach(element => {
            if(element.level>=level)
            {
                s.push(element.text)
            }
        });
        let ans=String(s.join(sep))
        ws.write(ans)
    
    }
}