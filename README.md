# Avaliacao_logica_da_programacao
 Questões que foram dadas para resolver em linguagem C. Segue abaixo a descricção de cada código:

# Código: "alunos.c"
 Em diversas competições acadêmicas, como a Olimpíada Brasileira de Informática (OBI), uma certa quantidade de competidores se classifica de uma fase para a fase seguinte, garantindo uma das vagas disponíveis. Entretanto, normalmente essa quantidade é variável, pois dada uma certa quantidade mínima de classificados, é frequente que haja empate na última vaga de classificação. Neste caso, é comum que todos os competidores empatados na última colocação se classifiquem.
 
 Sua tarefa é ajudar a calcular o número de competidores classificados para a próxima fase. Você receberá uma lista de pontuações obtidas pelos competidores e o número mínimo de vagas para a fase seguinte e você deve decidir quantos competidores de fato vão se classificar.

# Código: "depreciacao de bens.c"
 Uma empresa deseja calcular a depreciação de bens e para isso, elaborou a seguinte fórmula:
Valor depreciado = valor do bem * (taxa de depreciação / 100) Valor do bem depreciado = valor do bem – valor depreciado
Implemente um algoritmo que aplique esta fórmula.

# Código: "estrelas.c"
 Após comprar vários sítios adjacentes na região do oeste catarinense, a família Estrela construiu uma única estrada que passa por todos os sítios em sequência. O primeiro sítio da sequência foi batizado de Estrela 1, o segundo de Estrela 2, e assim por diante. Porém, o irmão que vive em Estrela 1 acabou enlouquecendo e resolveu fazer uma Jornada nas Estrelas para roubar carneiros das propriedades de seus irmãos. Mas ele está definitivamente pirado. Quando passa pelo sítio Estrela i, ele rouba apenas um carneiro daquele sítio (se o sítio tem algum) e segue ou para Estrela i + 1 ou para Estrela i - 1, dependendo se o número de carneiros em Estrela i era, respectivamente, ímpar ou par. Se não existe a Estrela para a qual ele deseja seguir, ele interrompe sua jornada. O irmão louco começa sua Jornada em Estrela 1, roubando um carneiro do seu próprio sítio.


# Código: "maquina de cafe.c"
 O novo prédio de uma empresa de desenvolvimento possui 3 andares. Em determinadas épocas do ano, os funcionários da empresa bebem muito café. Por conta disso, a presidência da empresa decidiu presentear os funcionários com uma nova máquina de expresso. Esta máquina deve ser instalada em um dos 3 andares, mas a instalação deve ser feita de forma que as pessoas não percam muito tempo subindo e descendo as escadas. Cada funcionário bebe um café expresso por dia. Ele precisa ir do andar onde trabalha até o andar onde está a máquina e voltar para o seu posto de trabalho. Todo funcionário leva um minuto para subir ou descer um andar. Como a empresa se importa muito com a eficiência, ela quer posicionar a máquina de forma a minimizar o tempo total gasto subindo e descendo as escadas. 
 Sua tarefa é ajudar a diretoria a posicionar a máquina de forma a minimizar o tempo total gasto pelos funcionários subindo e descendo as escadas. A entrada consiste em 3 números, A1, A2 e A3 (0 ≤ A1, A2, A3 ≤ 1000), um por linha, onde Ai representa o número de pessoas que trabalham no i-ésimo andar.

# Código: "vendas.c"
Desenvolva um algoritmo para processar vendas seguindo os seguintes requisitos:
a) Calcular o valor total da compra.
b) Calcular o valor médio dos itens comprados (fazer a média).
c) Do valor total da compra separar e mostrar reais e centavos.
d) Dos reais separar em cédulas de 100, 50, 20, 10, 5, 2 e moedas de 1.
Além disso, deve haver a implementação das seguintes validações:
a) Ler a quantidade e o respectivo valor de produtos e parar a leitura quando informado valor 0 ou negativo para a quantidade.
b) Ler o valor somente se informada quantidade válida. O valor deve ser validado para que seja positivo e exibir as informações sobre o troco.

# Código: "verificadores.c"
Elaborar um programa que valide o número de uma conta corrente com três dígitos, retorne o dígito verificador e informe se o número da conta está certo, ou seja se o dígito verificador é o correto. Ler os quatro dígitos como um único número, validando para que esse número esteja em um intervalo de 1000 a 9999. Separar os dígitos de forma que os três primeiros sejam o número da conta e o último o dígito verificador. Validar a entrada, ou seja, repetir a entrada do número até que seja informado um número com somente quatro dígitos.
Por exemplo: Se o número informado for 1234, 123 é o número da conta e 4 é o dígito verificador.
Para obter o dígito verificador:
- Somar o número da conta com o seu inverso = 123 + 321 = 444
- Multiplicar cada dígito pela sua ordem posicional e somar os resultados = 4 *1 + 4 * 2 + 4 * 3 = 24
- O último dígito desse resultado é o verificador: 4
  
