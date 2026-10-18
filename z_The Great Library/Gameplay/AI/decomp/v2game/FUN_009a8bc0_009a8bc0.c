// FUN_009a8bc0 @ 009a8bc0 body=[[009a8bc0, 009a8c49]]


void FUN_009a8bc0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EDI + 0x6c) = 1;
  *(undefined4 *)(unaff_EDI + 0x10c) = 1;
  if (*(char *)(unaff_EDI + 0xe4) != '\0') {
    *(undefined1 *)(unaff_EDI + 0xe5) = 1;
  }
  for (puVar1 = *(undefined4 **)(unaff_EDI + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 8))();
  }
  for (puVar1 = *(undefined4 **)(unaff_EDI + 0x58); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x18))();
  }
  if (*(int *)(unaff_EDI + 0x14c) != -1) {
    piVar3 = (int *)FUN_009c7290();
    cVar2 = (**(code **)(*piVar3 + 0x68))(*(undefined4 *)(unaff_EDI + 0x14c));
    if (cVar2 == '\0') {
      piVar3 = (int *)FUN_009c7290();
      (**(code **)(*piVar3 + 0x24))(*(undefined4 *)(unaff_EDI + 0x14c));
    }
  }
  return;
}

