// FUN_009a8d50 @ 009a8d50 body=[[009a8d50, 009a8d87]]


void FUN_009a8d50(void)

{
  char cVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x148) != -1) {
    piVar2 = (int *)FUN_009c7290();
    cVar1 = (**(code **)(*piVar2 + 0x68))(*(undefined4 *)(unaff_ESI + 0x148));
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_009c7290();
      (**(code **)(*piVar2 + 0x24))(*(undefined4 *)(unaff_ESI + 0x148));
    }
  }
  return;
}

