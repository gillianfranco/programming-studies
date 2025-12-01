import { createInterface } from 'readline';
import { somar, subtrair, multiplicar, dividir } from './mathLib.js';

const leitor = createInterface({
  input: process.stdin,
  output: process.stdout
});

leitor.question("Digite um número inteiro: ", (num1) => {
  leitor.question("Digite um operador: ", (operador) => {
    leitor.question("Digite um outro número inteiro: ", (num2) => {
      const n1 = parseInt(num1);
      const n2 = parseInt(num2);

      let resultado;

      switch (operador) {
        case '+':
          resultado = somar(n1, n2);
          break;
        case '-':
          resultado = subtrair(n1, n2);
          break;
        case '*':
          resultado = multiplicar(n1, n2);
          break;
        case '/':
          resultado = dividir(n1, n2);
          break;
        default:
          console.log("Operação inválida! Tente novamente depois.");
      }

      if (resultado) {
        console.log("Resultado: ", resultado);
      }

      leitor.close();

    });
  });
});
