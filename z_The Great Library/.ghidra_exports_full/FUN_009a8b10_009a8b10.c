// FUN_009a8b10 @ 009a8b10 body=[[009a8b10, 009a8b90]]


void FUN_009a8b10(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int unaff_EDI;
  
  puVar1 = *(undefined4 **)(unaff_EDI + 0x58);
  *(undefined4 *)(unaff_EDI + 0x6c) = 0;
  *(undefined4 *)(unaff_EDI + 0x10c) = 0;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0xc))();
  }
  for (puVar1 = *(undefined4 **)(unaff_EDI + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x18))();
  }
  if (*(int *)(unaff_EDI + 0x148) != -1) {
    piVar3 = (int *)FUN_009c7290();
    cVar2 = (**(code **)(*piVar3 + 0x68))(*(undefined4 *)(unaff_EDI + 0x148));
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_009c7290();
      (**(code **)(*piVar3 + 0x24))(*(undefined4 *)(unaff_EDI + 0x148));
    }
  }
  return;
}

