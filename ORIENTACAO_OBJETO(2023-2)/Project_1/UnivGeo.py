import matplotlib.pyplot as plt

class Ponto():
    def __init__(self,  x, y):
        self.x = x
        self.y = y

    def desenha_ponto (self):
        plt.scatter(self.x, self.y)

class Linha():
    def __init__(self, ponto1, ponto2):
        self.ponto1 = ponto1
        self.ponto2 = ponto2

    def desenha_linha (self):
        plt.plot([self.ponto1.x, self.ponto2.x], [self.ponto1.y, self.ponto2.y])

class Triangulo():
    def __init__(self, ponto1, ponto2, ponto3):
        self.ponto1 = ponto1
        self.ponto2 = ponto2
        self.ponto3 = ponto3

    def desenha_triangulo (self):
        x = [self.ponto1.x, self.ponto2.x, self.ponto3.x, self.ponto1.x]
        y = [self.ponto1.y, self.ponto2.y, self.ponto3.y, self.ponto1.y]
        plt.plot(x, y)

class Circulo:
    def __init__(self, centro, raio):
        self.centro = centro
        self.raio = raio

    def desenha_circulo(self):
        circulo = plt.Circle((self.centro.x, self.centro.y), self.raio, fill=False)
        plt.gca().add_patch(circulo)



ponto1 = Ponto(4, 5)
linha1 = Linha(Ponto(3,4), Ponto(6, 8))
triangulo1 = Triangulo(Ponto(2,0), Ponto(1,3), Ponto(4,2))
circulo1 = Circulo(Ponto(1,5), 1)

ponto1.desenha_ponto()
linha1.desenha_linha()
triangulo1.desenha_triangulo()
circulo1.desenha_circulo()

plt.axis('equal')
plt.title('UNIVERSO GEOMÉTRICO')
plt.show()