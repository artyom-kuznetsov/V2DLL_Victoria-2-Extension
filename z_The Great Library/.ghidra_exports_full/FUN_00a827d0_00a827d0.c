// FUN_00a827d0 @ 00a827d0 body=[[00a827d0, 00a8284b]]


undefined4 FUN_00a827d0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x13c) + 0x114);
  piVar3 = (int *)FUN_00a45090(param_1);
  if ((*piVar3 != 0) && (*(int *)(*(int *)(iVar1 + 4) + -4 + *piVar3 * 4) != 0)) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x13c) + 0x114);
    piVar3 = (int *)FUN_00a45090(param_1);
    uVar4 = 0;
    if (*piVar3 != 0) {
      uVar4 = *(undefined4 *)(*(int *)(iVar1 + 4) + -4 + *piVar3 * 4);
    }
    cVar2 = FUN_00a82850(uVar4);
    if (cVar2 != '\0') {
      FUN_00a82940();
    }
    return 1;
  }
  return 0;
}

