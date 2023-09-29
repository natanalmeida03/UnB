class MinhaClasse:
    proximo_numero = 1

    def __init__(self):
        self.numero = MinhaClasse.proximo_numero
        MinhaClasse.proximo_numero += 1

# Exemplo de uso:
objeto1 = MinhaClasse()
print(f"Objeto 1: Número = {objeto1.numero}")

objeto2 = MinhaClasse()
print(f"Objeto 2: Número = {objeto2.numero}")

objeto3 = MinhaClasse()
print(f"Objeto 3: Número = {objeto3.numero}")