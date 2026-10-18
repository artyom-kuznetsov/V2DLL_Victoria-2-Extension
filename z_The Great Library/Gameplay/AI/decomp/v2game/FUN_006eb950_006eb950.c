// FUN_006eb950 @ 006eb950 body=[[006eb950, 006eb9e6]]


void FUN_006eb950(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  iVar2 = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x2c) - *(int *)(unaff_EDI + 0x28) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EDI + 0x28) + iVar2 * 4) + 0x1c) + 0x58)
              )(param_1);
      if (cVar1 != '\0') {
        FUN_006e9530(*(undefined4 *)(*(int *)(unaff_EDI + 0x28) + iVar2 * 4),unaff_ESI,param_1);
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(unaff_EDI + 0x2c) - *(int *)(unaff_EDI + 0x28) >> 2);
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

