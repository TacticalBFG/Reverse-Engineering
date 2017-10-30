/* HOW TO IMPORT:
1. Go to your project in Visual Studio
2. Go to Project > Settings
3. Go to "VC/DECS" and go to include files
4. Add the folder that came with this.
5. Add #include <ResEditing.h>
*/

/* Needed files */
#include <iostream>
#include <string>

/* Windows library files */
#include <Windows.h>
#include <conio.h>
#include <WinINet.h>
#pragma comment(lib, "wininet.lib")

void MoveMemory(unsigned int EIP) {
  VirtualProtect(5,5,5,5,5);
  *(char*)EIP = 0x74;
}

void RestoreMemory(unsigned int EIP) {

}

void JumpMemory(unsigned int B) {
__asm {
    jmp B
  }
}

void Unprotect(unsinged int EIP) {

}
