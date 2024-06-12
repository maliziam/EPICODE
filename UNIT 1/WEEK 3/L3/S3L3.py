
print("1- Perimetro del quadrato")
print("2- Circonferenza")
print("3- Area triangolo")
x = input("Cosa vuoi calcolare??")

def perimetro_quadrato ():
    latoquadrato = input("quanto misura il lato del quadrato?")
    latoq = float (latoquadrato)
    perimetro_quadrato = latoq * 4
    print("il perimetro del quadrato misura" ,perimetro_quadrato)

def circonferenza ():
    raggio = input("quanto misura il raggio del cerchio?")
    r = float(raggio)
    circonferenza= r * 2 * 3.14
    print("la circonferenza del tuo cerchio e'" ,circonferenza)

def area_triangolo ():
    b_triang = input("digita la base del triangolo")
    x = float(b_triang)
    h_triang = input("digita l'altezza del triangolo")
    y = float(h_triang)
    area_triangolo = (x * y) / 2
    print("l'area del triangolo misura:" ,area_triangolo)

if (x == "1"):
    perimetro_quadrato()
elif(x == "2"):
    circonferenza()
elif(x == "3"):
    area_triangolo()
else:
    print("sono solo questi tre, 1 2 e 3, se cerchi altro c'e' Aranzulla")
