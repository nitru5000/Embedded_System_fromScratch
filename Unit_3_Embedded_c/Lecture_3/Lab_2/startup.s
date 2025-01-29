/* Startup_cortexM3.s
  abdullah rajeh
*/

.section .vectors

.word  0x20001000
.word  _reset
.word  Vector_handeler       /* 2 NMI */
.word  Vector_handeler       /* 3 Hard Fault */
.word  Vector_handeler       /* 4 MM Fault */
.word  Vector_handeler       /* 5 Bus Fault */
.word  Vector_handeler       /* 6 Usage Fault*/
.word  Vector_handeler       /* 7 RESERVED */
.word  Vector_handeler       /* 8 RESERVED */
.word  Vector_handeler       /* 9 RESERVED */
.word  Vector_handeler       /* 11 SV call */
.word  Vector_handeler       /* 12 DEBUG RESERVED */
.word  Vector_handeler       /* 13 RESERVED */

.section .text
  _reset:

      bl main
      bl .

   Vector_handeler:
       b _reset  

