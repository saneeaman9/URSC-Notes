# Sanee URSC-Notes

# January

<details>
  <summary>Week 1</summary>
<br/>
<details>
  <summary>Day 1</summary>
    
### OSI Model

* The 7 layers of CNN.

![1](https://github.com/saneeaman9/URSC-Notes/assets/75088597/5ed6e4af-d526-4a43-9339-347de351870f)


* Physical layer: This is the lowest layer that deals with the physical transmission of the data bits. It also handles bit synchronization, bit rate control, physical topologies, and transmission modes.

* Data link layer: This layer is responsible for the node-to-node delivery of the data frames. It also handles framing, error detection, error correction, and media access control.

* Network layer: This layer is responsible for routing the data packets across different networks. It also handles addressing, fragmentation, reassembly, and logical network topology.

* Transport layer: This layer ensures reliable and error-free data transmission between the source and destination. It provides services such as segmentation, reassembly, flow control, congestion control, and error detection and correction.

* Session layer: This layer establishes, maintains, and terminates the sessions between different applications. It also manages the synchronization, dialogue control, and recovery of data exchange.

* Presentation layer: This layer is responsible for translating the data between different formats, such as ASCII, EBCDIC, JPEG, etc. It also handles compression, decompression, encryption, and decryption of data4.

* Application layer: This is the topmost layer that interacts with the user applications, such as web browsers, email clients, etc. It provides services such as data formatting, encryption, authentication, and file transfer.


-> [ref1](https://www.cloudflare.com/learning/ddos/glossary/open-systems-interconnection-model-osi/), [ref2](https://faculty.sfcc.spokane.edu/Rudlock/files/WP_Simoneau_OSIModel.pdf)


</details>
<details>
  <summary>Day 2</summary>

### UART

UART stands for Universal Asynchronous Receiver Transmitter, which is a device or circuit that performs serial communication between different devices. Serial communication means that data is transmitted one bit at a time, as opposed to parallel communication, where multiple bits are transmitted simultaneously. Here are some brief points explaining the UART interface:


![1](https://github.com/saneeaman9/URSC-Notes/assets/75088597/aa8892ae-bd0c-4b9d-9f45-b871cbdbe6ce)

![2](https://github.com/saneeaman9/URSC-Notes/assets/75088597/ebd40e99-0974-4ee8-95f1-502311a0aef7)


* UART does not use a clock signal to synchronize the transmitter and receiver devices; instead, it relies on the same baud rate (bits per second) and data format (number of data bits, parity bit, and stop bits) for both ends.
* 
* UART contains input and output shift registers, which convert parallel data to serial data and vice versa, as well as transmit/receive buffers, which store the data temporarily.
* 
* UART also contains control logic that manages the data transmission and reception, such as generating start and stop bits, detecting errors, and handling flow contro.
* 
* UART can operate in different modes of communication, such as simplex (one-way), half-duplex (alternating), or full-duplex (two-way).
* 
* UART is often integrated in microcontrollers or other devices that need to communicate with external devices, such as sensors, modems, keyboards, etc.

->[ref1](https://www.embedded.com/understanding-the-uart/), [ref2](https://www.circuitbasics.com/basics-uart-communication/), [ref3](https://en.wikipedia.org/wiki/Universal_asynchronous_receiver-transmitter)

### SPI

![1](https://github.com/saneeaman9/URSC-Notes/assets/75088597/01b8b40c-eb82-4896-a148-5886bfe03680)

![2](https://github.com/saneeaman9/URSC-Notes/assets/75088597/12e8e0ba-9e40-44d1-a291-9a90999e7a29)


* SPI stands for Serial Peripheral Interface, a synchronous serial communication protocol used for short-distance wired communication between integrated circuits.
  
* SPI uses a master-slave architecture, where one device acts as the controller and generates the clock signal, and the other devices act as the peripherals and follow the master’s instructions.
 
* SPI requires four wires to connect the master and the slaves: SCLK (serial clock), MOSI (master output, slave input), MISO (master input, slave output), and SS (slave select).
  
* SPI can transfer data without interruption, as any number of bits can be sent or received in a continuous stream. This makes SPI faster and more efficient than other protocols that use start and stop conditions to define packets of data.
  
* SPI is standard with many variants, so different devices may have different modes, speeds, and formats of data transmission. Therefore, it is important to check the specifications of the devices before using SPi.

-> [ref1](https://www.circuitbasics.com/basics-of-the-spi-communication-protocol/), [ref2](https://en.wikipedia.org/wiki/Serial_Peripheral_Interface).

### I2C

I2C, or Inter-Integrated Circuit, is a **serial communication protocol** that allows multiple devices to communicate with each other. It combines the best features of SPI and UART. Here are some key points about I2C.

![1](https://github.com/saneeaman9/URSC-Notes/assets/75088597/06ecfcaf-913a-482e-babd-c50cf07386b4)

![2](https://github.com/saneeaman9/URSC-Notes/assets/75088597/1488c681-f291-429f-b7cf-fc7372c9b851)


* I2C uses only two wires to transmit data between devices: SDA (Serial Data) and SCL (Serial Clock).
  
* Data is transferred in messages, which are broken up into frames of data. Each message has an address frame that contains the binary address of the slave, and one or more data frames that contain the data being transmitted.

* I2C is synchronous, so the output of bits is synchronized to the sampling of bits by a clock signal shared between the master and the slave. The clock signal is always controlled by the master.

* I2C can connect multiple slaves to a single master or have multiple masters controlling single or multiple slaves.

* I2C doesn't have slave select lines like SPI, so it needs another way to let the slave know that data is being sent to it, and not another slave. It does this by addressing. The address frame is always the first frame after the start bit in a new message. The master sends the address of the slave it wants to communicate with to every slave connected to it. Each slave then compares the address sent from the master to its own address. If the address matches, it sends a low voltage ACK bit back to the master. If the address doesn’t match, the slave does nothing and the SDA line remains high.

![3](https://github.com/saneeaman9/URSC-Notes/assets/75088597/a9bf1e2a-a11f-4c0c-9d67-ef761c53647f)


-> [Basics of the I2C Communication Protocol - Circuit Basics.](https://www.circuitbasics.com/basics-of-the-i2c-communication-protocol),  [I2C - SparkFun Learn.](https://learn.sparkfun.com/tutorials/i2c/all),  [What is the I2C Communication Protocol? | CircuitBread.](https://www.circuitbread.com/tutorials/what-is-the-i2c-communication-protocol).

</details>
<details>
  <summary>Day 3</summary>

</details>
</details>

<br/>

<details>
  <summary>Week 2</summary>
<br/>
<details>
  <summary>Day 1</summary>

  * Tried to run Hello World on [ZCU102](https://docs.xilinx.com/v/u/en-US/ug1182-zcu102-eval-bd) evaluation kit.

  * Got familiar with vitis ai and attempted to run hello world.
  
  -> [Hello world video using Xilinx Zynq, Vivado 2020, and Vitis
](https://www.youtube.com/watch?v=Mb-cStd4Tqs)

  -> [Xillinx Vitis Introduction| Hello World with Vitis
](https://www.youtube.com/watch?v=LU9hP7KLDgE&t=452s)

 -> [FSBL Generation](https://www.css-techhelp.com/post/fsbl-creation-and-source-debug-in-xilinx-vitis-2019-2)
</details>


</details>
