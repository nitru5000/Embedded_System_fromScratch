#include <stdint.h>

void Reset_Handler();
extern int main(void);

void Default_Handler() {
    Reset_Handler();
}



void NMI_handler ()          __attribute__((weak, alias ("Default_Handler")));;
void H_Fault_Handler()       __attribute__((weak, alias ("Default_Handler")));;
void MM_Fault_Handler ()     __attribute__((weak, alias ("Default_Handler")));;
void Bus_Fault_Handler()     __attribute__((weak, alias ("Default_Handler")));;
void Uasage_Fault_Handler()  __attribute__((weak, alias ("Default_Handler")));;


uint32_t vectors[] __attribute__((section(".vectors"))) = {
    (uint32_t) 0x20001000,
    (uint32_t) &Reset_Handler,
    (uint32_t) &NMI_handler,
    (uint32_t) &H_Fault_Handler,
    (uint32_t) &MM_Fault_Handler,
    (uint32_t) &Bus_Fault_Handler,
    (uint32_t) &Uasage_Fault_Handler,

};

void Reset_Handler(void)
{
    main();
}