#include "DECO.h"
#include "MKL25Z4.h"

int main(){
    SIM->SCGC5|=SIM_SCGC5_PORTE_MASK;
    PTEPinIO(5,0);
    PTEPinIO(6,0);
    PTEpinIO(18,1);
    PTEpinIO(19,1);
    PTEpinIO(20,1);
    PTEpinIO(21,1);
  while(1){
    int estE0=pin Estado(5);
    char pinEstE0=pinAoI(5);
    int estE1=pin Estado(6);
    char pinEstE1=pinAoI(6);
    int estS0=pin Estado(18);
    char pinEstS0=pinAoI(18);
    int estS1=pin Estado(19);
    char pinEstS1=pinAoI(19);
    int estS2=pin Estado(20);
    char pinEstS2=pinAoI(20);
    int estS3=pin Estado(21);
    char pinEstS4=pinAoI(21);
    if(estE0==0 && estE1==0){
     PTE->PSOR|=(1u<<18);
     PTE->PSOR|=(0u<<19);
     PTE->PSOR|=(0u<<20);
     PTE->PSOR|=(0u<<21);
    }elsif(estE0==1 && estE1==0){
     PTE->PSOR|=(0u<<18);
     PTE->PSOR|=(1u<<19);
     PTE->PSOR|=(0u<<20);
     PTE->PSOR|=(0u<<21);
    } elsif(estE0==0 && estE1==1){
     PTE->PSOR|=(0u<<18);
     PTE->PSOR|=(0u<<19);
     PTE->PSOR|=(1u<<20); 
     PTE->PSOR|=(0u<<21);
    }elsif(estE0==1 && estE1==1){
     PTE->PSOR|=(0u<<18);
     PTE->PSOR|=(0u<<19);
     PTE->PSOR|=(0u<<20);
     PTE->PSOR|=(1u<<21);
    } 

}
}



