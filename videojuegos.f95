!Programa que ayuda con las compras
!en una tienda de videojuegos
! Hecho por Gr2

!abre programa en fortran
program videojuegos

    real::compra1, compra2, compra3, compra4, compra5, s1, s2, s3, s4, s5, total=0   !Declaracion de variables

    real::c1=199, c2=299, c3=399, c4=499, c5=1099 !Declaracion de constantes

    CHARACTER n*10 !Declaro nombre

    print*, 'Cual es tu nombre?'
    read*, n
    print*, ''
    print*, 'Cuantos videojuegos de la categoria 1 ($199) desea comprar?'
    print*, ''
    read*, compra1
    print*, 'Cuantos videojuegos de la categoria 2 ($299) desea comprar?'
    print*, ''
    read*, compra2
    print*, 'Cuantos videojuegos de la categoria 3 ($399) desea comprar?'
    print*, ''
    read*, compra3
    print*, 'Cuantos videojuegos de la categoria 4 ($499) desea comprar?'
    print*, ''
    read*, compra4
    print*, 'Cuantos videojuegos de la categoria 5 ($1099) desea comprar?'
    print*, ''
    read*, compra5

    s1= c1*compra1
    s2= c2*compra2
    s3= c3*compra3
    s4= c4*compra4
    s5= c5*compra5
    total= s1+s2+s3+s4+s5
    print*, 'Hola ',n
    print*, ''
    print*, ''
    print*,  ' El total de tu compra es:',total
    print*, ''
    print*, 'De la categaria 1 ',s1,' pesos'
    print*, ''
    print*, 'De la categaria 2 ',s2,' pesos'
    print*, ''
    print*, 'De la categaria 3 ',s3,' pesos'
    print*, ''
    print*, 'De la categaria 4 ',s4,' pesos'
    print*, ''
    print*, 'De la categaria 5 ',s5,' pesos'
!Se cierra el programa
end program videojuegos
