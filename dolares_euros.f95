!Convertir pesos a dólares y euros a partir de la cotización 1 dólar= 19.43 pesos, 1 euro= 21.82 pesos.
! Hecho por Gr2

!abre programa en fortran con nombre holaMundo
program conversion

    real::pesos   !Declaracion de variables

    real::D=19.43, E=21.82 !Declaracion de constante pi

    print*, 'Este programa convierte pesos a dolares y a euros.'
    print*, ''
    print*, 'Ingresa el valor en pesos: '
    read*, pesos
    D= pesos/D
    E= pesos/E
    print*, ''
    print*,  'Usted tiene ',D,' Dolares   o ',E,'Euros'

!Se cierra el programa
end program conversion
