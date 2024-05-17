#include "DECO.h"
#include "MKL25Z4.h"


void PTEpinIO(int pin,char IO){
    if(IO=='i'){
        PORTE->PCR[pin]->PORT_PCR_MUX(0);
    }
    elsif(IO=='0'){
        PORTE->PCR[pin]->PORT_PCR_MUX(1);
    }
}
int pinEstado(int pin){
    int estado=PTE->PDIR&(1u<<pin);
    return estado;
}
char pinAoI(int pin){
    intestado=PTE->PDIR&(1u<<pin);
    if(estado=='1'){
        return'A';
    }elsif(estado=='0'){
     return 'I';
    }
}


