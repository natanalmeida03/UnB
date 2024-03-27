# PBO
#### 26 DE MARÇO DE 2024

#### PROPOSICAO 1:

Sejam *a, b* ∈ **Z**, tais que a.b = 0. Entao a = 0 ou b = 0.

> *Demonstração*:   
Se a = 0, ok  
Suponha que a ≠ 0. Então:   
     a.b = 0 = a.0  
**Assim**, Pelo cancelamento, b = 0.

A proposição 1 nos diz que **Z** é um **domínio de integridade**.  

Ex: o tipo int em c/c++ nao forma umm domínio de integridade!

Suponha que:

*sizeof (int) = 4*, isto é, que um inteiro ocupe 32 bits em memoria.
Assim, se x é do tipo int, então x ∈ [-2<sup>31</sup>, 2<sup>31</sup> - 1]

``` c++
int x = (1<<10), y = (1<<22); // x = 2^10 e y = 2^22
int z = x*z; //z = 2^32 (10000000000000000000000000000000)
// z = 0
```

### AXIOMA 9 (PRINCÍPIO DA BOA ORDENAÇÃO):
Seja um *S* ⊂ **Z**, um conjunto limitado inferiormente (isto é, existe um 
m ∈ **Z** tal que *m* <= *x*, ∀ *x* ∈ **S**) e não-vazio. Então **S** tem um elemento mínimo, isto é, existe a ∈ **S** tal que 
*a* <= *x*, ∀ *x* ∈ **S**.

> **OBS:** O PBO NÃO VALE EM **Q**!

Seja S = (0,1). Temos que S != ∅, (por exemplo, 1/2 ∈ S) e que **S** é limitado inferiormente (0 ou -1).
Observe que 0 ∉ S.

Suponha que a ∈ S seja um elemento mínimo. Como a ∈ S, temos 0 < a < 1.  
dai:  
     *0 < a/2 < a < 1*, ou seja a/2 < a, e a mínima

Logo, nao vale PBO em **Q**

#### PROPOSIÇÃO 2:
Não existe um número inteiro *z*, tal que 0 < z < 1.

> *Demonstração:*   
Seja:   
     S = {z ∈ **Z** | 0 < z < 1}   
Supor, por contradição, que s != ∅. Temos que S é limitado inferiormente(por zero)   
Pelo PBO, S tem um elemento mínimo *a*. Como *a* ∈ S, temos que:  
     0 < a < 1   
Multiplicando as desigualdades por *a*, obtemos:   
     0 < a<sup>2</sup> < a < 1  
**Logo**, *a^2* ∈ S e é menor que o mínimo *a*, uma **contradição!**  
     Portanto, **S = ∅**.
