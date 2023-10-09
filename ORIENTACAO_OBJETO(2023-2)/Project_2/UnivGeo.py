import math
import time

class Point():
    n = 1
    def __init__(self,  x, y):
        self.x = x
        self.y = y
        self._name = Point.n
        Point.n += 1

    def update_coord (self, x, y):
        self.x = x
        self.y = y
        #print("updated ...")

    def print_coord (self):
        print(f'O PONTO {self._name} ESTA LOCALIZADO EM ({self.x}, {self.y})')

class Line():
    n = 1
    def __init__(self, ponto1, ponto2):
        self.ponto1 = ponto1
        self.ponto2 = ponto2
        self._name = Line.n
        Line.n += 1

    def print_lenght (self):
        c = math.sqrt((self.ponto2.x - self.ponto1.x)**2 + (self.ponto2.y - self.ponto1.y)**2)
        print(f'COMPRIMENTO DA LINHA {self._name} : {c:.2f}')

class Circle():
    n = 1
    def __init__(self, centro, raio):
        self.centro = centro
        self.raio = raio
        self._name = Circle.n
        Circle.n += 1

    def update_raio(self, nraio):
        self.raio = nraio
        
    def update_coord(self, x, y):
        self.centro.update_coord(x, y)

    def print_area(self):
        a = 3.14 * self.raio**2
        print(f'A ÁREA DO CÍRCULO {self._name} É: {a:.2f}')

    def print_perimeter(self):
        p = 2 * 3.14 * self.raio
        print(f'O PERÍMETRO DO CÍRCULO {self._name} É: {p:.2f}')

    def print_coord (self):
        print(f'O CIRCULO {self._name} TEM SEU CENTRO EM: ({self.centro.x}, {self.centro.y})')
        print(f'COM O RAIO DE: {self.raio}')

class Triangle():
    n = 1
    def __init__(self, ponto1, ponto2, ponto3):
        self.ponto1 = ponto1
        self.ponto2 = ponto2
        self.ponto3 = ponto3
        self._name = Triangle.n
        Triangle.n += 1

    def print_perimeter(self):
        l1 = math.sqrt((self.ponto2.x - self.ponto1.x)**2 + (self.ponto2.y - self.ponto1.y)**2)
        l2 = math.sqrt((self.ponto3.x - self.ponto2.x)**2 + (self.ponto3.y - self.ponto2.y)**2)
        l3 = math.sqrt((self.ponto1.x - self.ponto3.x)**2 + (self.ponto1.y - self.ponto3.y)**2)
        p = l1 + l2 + l3
        print(f'O PERÍMETRO DO TRIÂNGULO {self._name} É: {p:.2f}')

    def print_coord (self):
        print(f'O TRIANGULO {self._name} ESTÁ LOCALIZADO EM: [({self.ponto1.x}, {self.ponto1.y}), ({self.ponto2.x}, {self.ponto2.y}), ({self.ponto3.x}, {self.ponto3.y})]')
        
def main():
    ponto1 = Point(4, 5)
    ponto2 = Point(6, 8)
    linha1 = Line(Point(3,4), Point(6, 8))
    linha2 = Line(Point(5,7), Point(3, 8))
    circulo1 = Circle(Point(1,5), 1)
    circulo2 = Circle(Point(5,4), 3)
    triangulo1 = Triangle(Point(2,0), Point(1,3), Point(4,2))
    triangulo2 = Triangle(Point(4,1), Point(4,3), Point(6,1))

    print(f'PONTO:')
    ponto1.print_coord()
    #ponto2.print_coord()
    ponto1.update_coord(8, 4)
    #ponto2.update_coord(7, 2)
    ponto1.print_coord()
    #ponto2.print_coord()

    print("\n")
    print("LINHA:")
    linha1.print_lenght()
    #linha2.print_lenght()

    print("\n")
    print("CÍRCULO:")
    circulo1.print_coord()
    #circulo2.print_coord()
    circulo1.print_area()
    #circulo2.print_area()
    circulo1.print_perimeter()
    #circulo2.print_perimeter()
    circulo1.update_raio(2)
    #circulo2.update_raio(4)
    circulo1.update_coord(6, 8)
    circulo1.print_coord()
    circulo1.print_area()
    #circulo2.print_area()
    circulo1.print_perimeter()
    #circulo2.print_perimeter()

    print("\n")
    print("TRIANGULO:")
    triangulo1.print_perimeter()
    #triangulo2.print_perimeter()
    triangulo1.print_coord()
    #triangulo2.print_coord()

if __name__ == "__main__":
    start_time = time.time()
    main()
    end_time = time.time()

    execution_time = end_time - start_time

    print(f"\nTEMPO DE EXECUCAO: {execution_time:.4f} segundos")