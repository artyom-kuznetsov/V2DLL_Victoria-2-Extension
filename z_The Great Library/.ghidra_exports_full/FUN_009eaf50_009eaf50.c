// FUN_009eaf50 @ 009eaf50 body=[[009eaf50, 009eafb9]]


bool FUN_009eaf50(void)

{
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  size_t local_10;
  
  iVar1 = (**(code **)(*unaff_ESI + 0x2c))();
  if (iVar1 != 0) {
    return false;
  }
  FID_conflict__memcpy((void *)0x0,*(void **)(unaff_EDI + 8),local_10);
  iVar1 = (**(code **)(*unaff_ESI + 0x4c))();
  return iVar1 == 0;
}

