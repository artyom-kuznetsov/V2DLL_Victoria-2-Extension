// FUN_00978100 @ 00978100 body=[[00978100, 00978125]]


undefined4 FUN_00978100(void)

{
  char cVar1;
  undefined4 uVar2;
  int *unaff_ESI;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x5c) == 1) {
    cVar1 = (**(code **)(*unaff_ESI + 0x20))();
    if (cVar1 != '\0') {
      return *(undefined4 *)(unaff_ESI[0x16] + *(int *)(unaff_EDI + 0x50) * 4);
    }
  }
  uVar2 = FUN_00974850();
  return uVar2;
}

