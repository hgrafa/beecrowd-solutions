var input = require("fs").readFileSync("stdin", "utf8");
var lines = input.split("\n");

const inicio = parseInt(lines[0]);
const [v, a] = lines[1].split(" ");

const vertices = parseInt(v);
const arestas = parseInt(a);
let indexLinha = 2;

function exibeMatriz(matriz) {
  for (let i = 0; i < tamanho; i++) {
    let linha = "";

    for (let j = 0; j < matriz[i].length; j++) {
      linha += matriz[i][j] + " ";
    }

    console.log(linha);
  }
}

function lerProximaAresta() {
  aresta = lines[indexLinha].split(" ");
  indexLinha++;
  return {
    in: parseInt(aresta[0]),
    out: parseInt(aresta[1]),
  };
}

let matriz = new Array(vertices);
const tamanho = matriz.length;
let contador = arestas;

for (let i = 0; i < tamanho; i++) {
  matriz[i] = [];
  for (let j = 0; j < tamanho; j++) {
    matriz[i].push(0);
  }
}

for (let i = 0; i < arestas; i++) {
  const conexao = lerProximaAresta();
  if (matriz[conexao.in][conexao.out] == 1) {
    contador--;
  } else {
    matriz[conexao.in][conexao.out] = 1;
    matriz[conexao.out][conexao.in] = 1;
  }
}

console.log(2 * contador);
