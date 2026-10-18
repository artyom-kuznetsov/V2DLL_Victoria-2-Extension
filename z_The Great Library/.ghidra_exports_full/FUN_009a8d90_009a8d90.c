// FUN_009a8d90 @ 009a8d90 body=[[009a8d90, 009a8dc7]]


void FUN_009a8d90(void)

{
  char cVar1;
  int *piVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x14c) != -1) {
    piVar2 = (int *)FUN_009c7290();
    cVar1 = (**(code **)(*piVar2 + 0x68))(*(undefined4 *)(unaff_ESI + 0x14c));
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_009c7290();
      (**(code **)(*piVar2 + 0x24))(*(undefined4 *)(unaff_ESI + 0x14c));
    }
  }
  return;
}

