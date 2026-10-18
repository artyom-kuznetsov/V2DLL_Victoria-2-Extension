// FUN_00955f20 @ 00955f20 body=[[00955f20, 00955fce]]


void FUN_00955f20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int unaff_ESI;
  
  iVar3 = param_1;
  iVar1 = *(int *)(unaff_ESI + 100);
  if ((iVar1 != 0) && (*(char *)(*(int *)(unaff_ESI + 0x68) + 0x40) != '\0')) {
    if ((*(char *)(*(int *)(unaff_ESI + 0x68) + 0x50) == '\0') ||
       ((param_1 != 0 && (*(int *)(iVar1 + 0x188) == *(int *)(param_1 + 0x188))))) {
      param_1 = *(undefined4 *)(unaff_ESI + 0x58);
      iVar1 = *(int *)(iVar1 + 0x58);
      piVar4 = (int *)FUN_004c25b0();
      FUN_004ee550(iVar1 * 0xb0 + 0x10 + *piVar4,&param_1);
    }
    else {
      param_1 = *(undefined4 *)(unaff_ESI + 0x58);
      FUN_004d1020(unaff_ESI,&param_1);
    }
  }
  if (((*(int *)(unaff_ESI + 0x274) == 0) || (*(int *)(unaff_ESI + 100) == 0)) || (iVar3 == 0)) {
    *(int *)(unaff_ESI + 100) = iVar3;
  }
  else {
    iVar2 = *(int *)(*(int *)(unaff_ESI + 100) + 300);
    iVar1 = *(int *)(iVar3 + 300);
    *(int *)(unaff_ESI + 100) = iVar3;
    if (iVar2 != iVar1) {
      *(undefined4 *)(unaff_ESI + 0x274) = 0;
      return;
    }
  }
  return;
}

