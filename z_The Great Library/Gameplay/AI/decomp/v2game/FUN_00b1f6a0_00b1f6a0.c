// FUN_00b1f6a0 @ 00b1f6a0 body=[[00b1f6a0, 00b1f6bc] [00b1f6c0, 00b1f7ad]]


void FUN_00b1f6a0(undefined4 param_1,uint param_2,int param_3,code *param_4,code *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  while (4 < param_3 - param_2) {
    uVar4 = param_2 + param_3 >> 1;
    iVar1 = (*param_4)(param_1,param_2,uVar4);
    if (0 < iVar1) {
      (*param_5)(param_1,param_2,uVar4);
    }
    iVar1 = (*param_4)(param_1,param_2,param_3);
    if (0 < iVar1) {
      (*param_5)(param_1,param_2,param_3);
    }
    iVar1 = (*param_4)(param_1,uVar4,param_3);
    if (0 < iVar1) {
      (*param_5)(param_1,uVar4,param_3);
    }
    uVar2 = param_3 - 1;
    (*param_5)(param_1,uVar4,uVar2);
    uVar4 = param_2;
    uVar3 = uVar2;
    while( true ) {
      do {
        uVar5 = uVar4;
        uVar4 = uVar5 + 1;
        iVar1 = (*param_4)(param_1,uVar4,uVar2);
      } while (iVar1 < 0);
      do {
        uVar3 = uVar3 - 1;
        iVar1 = (*param_4)(param_1,uVar3,uVar2);
      } while (0 < iVar1);
      if (uVar3 < uVar4) break;
      (*param_5)(param_1,uVar4,uVar3);
    }
    if (uVar4 != param_3 - 1U) {
      (*param_5)(param_1,uVar4,param_3 - 1U);
    }
    FUN_00b1f6a0(param_1,param_2,uVar3,param_4,param_5);
    param_2 = uVar5 + 2;
  }
  FUN_00b1f640(param_2,param_3,param_4,param_5);
  return;
}

