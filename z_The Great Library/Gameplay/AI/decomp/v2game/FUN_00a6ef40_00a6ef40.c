// FUN_00a6ef40 @ 00a6ef40 body=[[00a6ef40, 00a6ef91] [00a6ef95, 00a6efab] [00a6efb4, 00a6efbd]]


void FUN_00a6ef40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *unaff_EDI;
  
  *(undefined1 *)(unaff_EDI + 3) = 0;
  puVar3 = (undefined4 *)*unaff_EDI;
  while( true ) {
    while( true ) {
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      if (*(char *)(puVar3 + 9) != '\0') break;
      puVar3 = (undefined4 *)puVar3[8];
    }
    puVar1 = (undefined4 *)puVar3[8];
    if (*(char *)(unaff_EDI + 3) == '\0') break;
    *(undefined1 *)(puVar3 + 9) = 1;
    puVar3 = puVar1;
  }
  iVar2 = puVar3[7];
  if (iVar2 != 0) {
    *(undefined4 **)(iVar2 + 0x20) = puVar1;
  }
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[7] = iVar2;
  }
  if (puVar3 == (undefined4 *)*unaff_EDI) {
    *unaff_EDI = puVar1;
  }
  if (puVar3 == (undefined4 *)unaff_EDI[1]) {
    unaff_EDI[1] = iVar2;
  }
  if ((uint)puVar3[5] < 0x10) {
    puVar3[5] = 0xf;
    puVar3[4] = 0;
    *(undefined1 *)puVar3 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(puVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar3);
}

