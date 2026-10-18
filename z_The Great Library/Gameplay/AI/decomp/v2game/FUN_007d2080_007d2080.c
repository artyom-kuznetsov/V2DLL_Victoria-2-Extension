// FUN_007d2080 @ 007d2080 body=[[007d2080, 007d21c3]]


void FUN_007d2080(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    iVar4 = *(int *)(param_1 + iVar2 * 4);
    iVar5 = *param_4;
    iVar3 = FUN_00967f50();
    if ((iVar3 == 0) || (iVar3 = FUN_00967f50(), iVar3 != 0)) {
      iVar3 = FUN_00967f50();
      if ((iVar3 == 0) && (iVar3 = FUN_00967f50(), iVar3 != 0)) break;
      iVar3 = FUN_00967f50();
      if ((iVar3 == 0) && (iVar3 = FUN_00967f50(), iVar3 == 0)) {
        iVar4 = *(int *)(iVar4 + 0x274);
        if (iVar4 == 0) {
LAB_007d2129:
          if ((*(int *)(iVar5 + 0x274) != 0) || ((iVar4 == 0 && (*(int *)(iVar5 + 0x274) == 0))))
          break;
        }
        else {
          if (*(int *)(iVar5 + 0x274) == 0) goto LAB_007d2151;
          if (iVar4 == 0) goto LAB_007d2129;
        }
        if (*(uint *)(*(int *)(iVar5 + 0x274) + 0x28) <= *(uint *)(iVar4 + 0x28)) break;
      }
      else {
        iVar4 = FUN_00967f50();
        uVar1 = *(uint *)(iVar4 + 0xb8);
        iVar4 = *(int *)(iVar4 + 0xbc);
        iVar5 = FUN_00967f50();
        if ((iVar4 < *(int *)(iVar5 + 0xbc)) ||
           ((iVar4 <= *(int *)(iVar5 + 0xbc) && (uVar1 <= *(uint *)(iVar5 + 0xb8))))) break;
      }
    }
LAB_007d2151:
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  }
  *(int *)(param_1 + param_2 * 4) = *param_4;
  return;
}

