// FUN_009bcea0 @ 009bcea0 body=[[009bcea0, 009bcf1b]]


void FUN_009bcea0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined4 *unaff_EDI;
  
  iVar2 = param_1;
  param_1 = FUN_00462500(param_2);
  if (param_1 != *(int *)(iVar2 + 0x6b6c8)) {
    cVar3 = FUN_0098ab20();
    if (cVar3 == '\0') {
      piVar4 = &param_1;
      goto LAB_009bcee2;
    }
  }
  param_2 = *(int *)(iVar2 + 0x6b6c8);
  piVar4 = &param_2;
LAB_009bcee2:
  if (*piVar4 == *(int *)(iVar2 + 0x6b6c8)) {
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    return;
  }
  iVar5 = *(int *)(*piVar4 + 0x28) * 0x2c;
  uVar1 = *(undefined4 *)(iVar5 + 0x24 + iVar2);
  unaff_EDI[1] = *(undefined4 *)(iVar5 + 0x28 + iVar2);
  *unaff_EDI = uVar1;
  return;
}

