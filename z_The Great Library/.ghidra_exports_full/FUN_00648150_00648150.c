// FUN_00648150 @ 00648150 body=[[00648150, 006481ca]]


void FUN_00648150(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  undefined1 *unaff_ESI;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x60);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
      *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
      *unaff_ESI = 0;
      *(undefined4 *)(unaff_ESI + 0x2c) = 0;
      *(undefined4 *)(unaff_ESI + 0x30) = 0xf;
      unaff_ESI[0x1c] = 0;
      *(undefined4 *)(unaff_ESI + 0x48) = 0;
      *(undefined4 *)(unaff_ESI + 0x4c) = 0xf;
      unaff_ESI[0x38] = 0;
      *(undefined4 *)(unaff_ESI + 0x54) = 0;
      unaff_ESI[0x58] = 1;
      return;
    }
    piVar2 = (int *)*puVar1;
    cVar3 = (**(code **)(*piVar2 + 0xc))(param_1);
    if (cVar3 != '\0') break;
    puVar1 = (undefined4 *)puVar1[2];
  }
  (**(code **)(*piVar2 + 0x10))();
  return;
}

