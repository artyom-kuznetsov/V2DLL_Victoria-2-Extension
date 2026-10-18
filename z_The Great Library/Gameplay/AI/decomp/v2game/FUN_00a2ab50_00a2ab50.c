// FUN_00a2ab50 @ 00a2ab50 body=[[00a2ab50, 00a2abc7]]


undefined4 * FUN_00a2ab50(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 unaff_EDI;
  int local_8;
  
  iVar3 = param_1;
  param_1 = FUN_00a2cad0(unaff_EDI);
  if (param_1 != *(int *)(iVar3 + 0x100)) {
    cVar4 = FUN_0098ab20();
    if (cVar4 == '\0') {
      piVar5 = &param_1;
      goto LAB_00a2ab8f;
    }
  }
  local_8 = *(int *)(iVar3 + 0x100);
  piVar5 = &local_8;
LAB_00a2ab8f:
  iVar1 = *piVar5;
  if (iVar1 == *(int *)(iVar3 + 0x100)) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x28);
  param_2[1] = *(undefined4 *)(iVar1 + 0x2c);
  *param_2 = uVar2;
  return param_2;
}

