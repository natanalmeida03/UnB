# INDUÇÃO
#### 28 DE MARÇO DE 2024

#### PROPOSICAO(PRINCIPIO DA INDUCAO)

Seja S ⊂ **Z**, tal que:   
1. a ∈ S, a ∈ **Z**
1. m ∈ S ⇒ m+1 ∈ S, ∀ m ∈ **Z**

Então: {z ∈ **Z** | a >= a} ⊂ S.

#### PRINCIPIO DA INDUCAO (FORTE)

Seja S ⊂ **Z** tal que:   
1. a ∈ S
1. a, a+1, a+2, ... , m ∈ S => m+1 ∈ S

Entao:   
{z ∈ **Z** | z >= a} ⊂ S

**DEMONSTRACAO**: Por contradicao.

Seja 
     T = { z ∈ **Z** | z >= a e z ∉ S}

Suponha, por contradicao que T = ∅. Observer que T é limitado inferiormente (por a) e que a ∉ T(pois *a* ∈ S).

Pelo principio da boa ordenacao, existe um elemento minimo m de T, temos que *m > a*.

Por hipotese, a, a+1, a+2, ..., m-1 ∈ S.

Por (2), (n-1) + 1 = m ∈ S, **UMA CONTRADICAO!!** 

Logo T = ∅, ou seja, {x ∈ **Z** | x >= a} ⊂ S.