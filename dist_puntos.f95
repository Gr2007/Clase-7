!Calcular la distancia entre dos puntos.
! Hecho por Gr2

!abre programa en fortran
program distanciaPuntos

    real::x1, x2, y1, y2, D   !Declaracion de variables

    print*, 'Este programa calcula la la distancia entre dos puntos.'
    print*, ''
    print*, 'Ingresa el punto uno en el formato (x1,y1) '
    read*, x1,y1
    print*, ''
    print*, 'Ingresa el punto uno en el formato (x2,y2) '
    read*, x2,y2
    D= SQRT((x2-x1)**2+(y2-y1)**2)
    print*, ''
    print*,  'La distancia de los puntos es: ',D,''
!Se cierra el programa
end program distanciaPuntos
