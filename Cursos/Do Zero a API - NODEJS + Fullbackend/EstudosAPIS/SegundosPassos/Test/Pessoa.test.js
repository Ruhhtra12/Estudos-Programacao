const {describe, expect, it} = require("@jest/globals")

const Servicepessoa = require("../SRC/Services/Pessoa")

describe("Primeiro teste de pessoa", () => {
    const service = new Servicepessoa()

    it("Add um nome na lista", ()=>{
        const nome = "Lucas";
        service.AdicionarElemento(nome)

        const nomes = service.PegarTodos()

         expect(nomes[nomes.length - 1]).toBe(nome)
    })
    it("Deletar um nome na lista", ()=>{
        const index = 0
        const nomeincial = service.PegarUm(index)
        console.log(nomeincial)
        service.DeletarElemento(nomeincial)
        const nomedepois = service.PegarUm(index)
        console.log(nomedepois)

         expect(nomedepois).not.toBe(nomeincial)
    })
})