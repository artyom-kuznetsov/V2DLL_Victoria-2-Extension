// FUN_004e07a0 @ 004e07a0 body=[[004e07a0, 004e0859]]


void FUN_004e07a0(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  while (param_3 < param_2) {
    param_2 = (param_2 + -1) / 2;
    uVar1 = *(uint *)(param_4 + 0x18);
    iVar3 = param_2 * 0x160 + param_1;
    uVar2 = *(uint *)(iVar3 + 0x18);
    uVar4 = uVar2;
    if (uVar1 <= uVar2) {
      uVar4 = uVar1;
    }
    uVar4 = FUN_00414bd0(uVar4);
    if (uVar4 == 0) {
      if (uVar1 <= uVar2) {
        uVar4 = (uint)(uVar2 != uVar1);
        goto LAB_004e0813;
      }
    }
    else {
LAB_004e0813:
      if (-1 < (int)uVar4) break;
    }
    FUN_004dcf00(iVar3);
  }
  FUN_004dcf00(param_4);
  return;
}

