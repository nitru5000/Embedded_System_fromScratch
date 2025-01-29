// Eng.Adbdullah hassan
#include <stdint.h>

extern int main (void);
extern unsigned int _stack_top;
extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;

void Reset_Handler();

void Default_Handler() {
    Reset_Handler();
}



void NMI_handler ()          __attribute__((weak, alias ("Default_Handler")));;
void H_Fault_Handler()       __attribute__((weak, alias ("Default_Handler")));;
void MM_Fault_Handler ()     __attribute__((weak, alias ("Default_Handler")));;
void Bus_Fault_Handler()     __attribute__((weak, alias ("Default_Handler")));;
void Uasage_Fault_Handler()  __attribute__((weak, alias ("Default_Handler")));;


uint32_t vectors[] __attribute__((section(".vectors"))) = {
    (uint32_t) &_stack_top,
    (uint32_t) &Reset_Handler,
    (uint32_t) &NMI_handler,
    (uint32_t) &H_Fault_Handler,
    (uint32_t) &MM_Fault_Handler,
    (uint32_t) &Bus_Fault_Handler,
    (uint32_t) &Uasage_Fault_Handler,

};



void Reset_Handler(void)
{
    int i ;
    // Copy sections from flash to ram
    unsigned int Data_Size = (unsigned char*) &_E_DATA - (unsigned char*) &_S_DATA ;
    unsigned char* P_src   = (unsigned char*) &_E_text ;
    unsigned char* P_dst   = (unsigned char*) &_S_DATA ;

    for (i = 0; i < Data_Size;i++)
    {
        *((unsigned char*)P_dst++) = *((unsigned char*)P_src++) ;
    }

    // init .bss sectio in sram =0
    unsigned int bss_Size = (unsigned char) &_E_bss - (unsigned char) &_S_bss ;
    P_dst = (unsigned char*)&_S_bss ;
    for ( i = 0; i < bss_Size; i++)
    {
        *((unsigned char*)P_dst++) = (unsigned char)0 ; 
    }

     main();
}