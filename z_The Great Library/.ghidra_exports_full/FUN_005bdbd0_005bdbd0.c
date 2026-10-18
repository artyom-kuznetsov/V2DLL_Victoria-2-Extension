// FUN_005bdbd0 @ 005bdbd0 body=[[005bdbd0, 005bdc7e]]


void FUN_005bdbd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_EDI;
  undefined8 uVar3;
  
  uVar3 = __allmul(*(int *)(unaff_EDI + 0xb4),*(int *)(unaff_EDI + 0xb4) >> 0x1f,1000,0);
  uVar1 = __alldiv(uVar3,param_1,param_1 >> 0x1f);
  *(undefined4 *)(unaff_EDI + 0xb4) = uVar1;
  FUN_005db270(param_1);
  FUN_005db270(param_1);
  iVar2 = 0;
  if (0 < (*(int *)(unaff_EDI + 100) - *(int *)(unaff_EDI + 0x60)) / 0x18) {
    do {
      FUN_005db270(param_1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (*(int *)(unaff_EDI + 100) - *(int *)(unaff_EDI + 0x60)) / 0x18);
  }
  return;
}

