const http = require('http')


http.createServer((Request, Response)=>{
    if(Request.url ==='/favicon.ico'){
        Response.end('Erro: 404')
        return
    }

    const baseURL = `https://${Request.headers.host}`
    const MinhaURL = new URL(Request.url,baseURL)    
    console.log(MinhaURL.searchParams.get('ALOU'))
    console.log(MinhaURL.searchParams.get('Feijao'))
    
    


    
     Response.end()
}).listen(3000)