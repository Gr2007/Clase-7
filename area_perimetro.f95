!Calcular el área y el perímetro de un rectángulo a partir de su base y altura.
!(Usar A = base ∗ altura y P = 2*base + 2*altura)

!Abre programa areaYperimetro

program areaYperimetro

    real::A, B, base, altura

    !Impresion del mensaje
    print*, 'Este programa calcula el area y el perimetro de un rectangulo a partir de su base y altura. '
    print*, ''
    print*, 'Ingresa el valor de la base: '
    read*, base
    print*, ''
    print*, 'Ingresa el valor de la altura: '
    read*, altura
    A= base*altura
    P= 2*base + 2*altura
    print*, ''
    print*, 'El area es ',A,' y el perimetro es ',P

end program areaYperimetro
