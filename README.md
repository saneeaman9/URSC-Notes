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
