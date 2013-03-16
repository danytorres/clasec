print "cual es tu fecha de cumpleanos? "
dia = raw_input("dia ")
mes = raw_input("mes ")
ano = raw_input("ano ")
print "tu cumpleanos es ", dia, mes, ano
print type(dia)
print type(mes)
print type(ano)
dias1 = 31 * (mes - 1)
diast = dias1 + dia
print "dias pasados desde ano nuevo", diast