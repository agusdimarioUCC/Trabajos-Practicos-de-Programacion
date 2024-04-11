Inicio

DistanciaTotal <- Distancia * 2

CostoBase <- DistanciaTotal * 0.19

Si DistanciaTotal > 500 Y Estancia > 10 Entonces
Descuento <- 0.2
Sino
Descuento <- 0
FinSi

PrecioPasaje <- CostoBase - (CostoBase * Descuento)

Escribir "Precio del pasaje: $" + PrecioPasaje

Fin