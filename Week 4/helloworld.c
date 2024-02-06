#include <stdio.h>
#include "xparameters.h"
#include "xgpio.h"
#include "xuartps.h"

#define LED_GPIO_DEVICE_ID XPAR_AXI_GPIO_0_DEVICE_ID
#define UART_DEVICE_ID XPAR_PSU_UART_0_DEVICE_ID

int main() {
    XGpio Gpio;  // GPIO instance for controlling LEDs
    XUartPs Uart; // UART instance for communication
    u8 readBuffer[10]; // Buffer to store received UART data

    // Initialize GPIO for LEDs
    XGpio_Initialize(&Gpio, LED_GPIO_DEVICE_ID);
    XGpio_SetDataDirection(&Gpio, 1, 0x0); // Set LED GPIO as output

    // Initialize UART
    XUartPs_Config *UartCfgPtr = XUartPs_LookupConfig(UART_DEVICE_ID);
    XUartPs_CfgInitialize(&Uart, UartCfgPtr, UartCfgPtr->BaseAddress);

    while (1) {
        // Receive one byte from UART
        XUartPs_Recv(&Uart, readBuffer, 1);

        // Check if the received character is a digit between '0' and '7'
        if (readBuffer[0] >= '0' && readBuffer[0] <= '7') {
            int ledIndex = readBuffer[0] - '0';
            // Turn on the corresponding LED using the GPIO
            XGpio_DiscreteWrite(&Gpio, 1, 1 << ledIndex);
        }
    }

    return 0;
}
