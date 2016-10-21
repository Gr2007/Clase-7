! Calcular la longitud de una circunferencia a partir de su radio. (Usar C= 2*π*r )
! Hecho por Luis Fernando Bravo Chavez

!abre programa en fortran con nombre holaMundo
program LongitudCircunferencia

    real::c, r   !Declaracion de variables
    real::pi=3.14159 !Declaracion de constante pi

    print*, 'Este programa calcula la longitud de una circunferencia a partir de su radio.'
    print*, ''
    print*, 'Ingresa el valor del radio: '
    read*, r
    c= 2*pi*r
    print*, ''
    print*,  'La longitud es: ',c,''

!Se cierra el programa
end program LongitudCircunferencia
