// FUN_00455cc0 @ 00455cc0 body=[[00455cc0, 00455d2a]]


void FUN_00455cc0(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(in_EAX + 0x54) != 0) {
    puVar2 = (undefined4 *)(**(code **)(**(int **)(in_EAX + 0x54) + 0x2c))();
    for (piVar1 = (int *)*puVar2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (unaff_EDI == *(int *)(*piVar1 + 0x34)) {
        FUN_00476360(*piVar1,unaff_ESI);
        return;
      }
    }
  }
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  unaff_ESI[0x1c] = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  unaff_ESI[0x38] = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  unaff_ESI[0x58] = 1;
  return;
}

