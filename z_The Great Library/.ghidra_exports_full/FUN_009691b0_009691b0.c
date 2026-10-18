// FUN_009691b0 @ 009691b0 body=[[009691b0, 0096920b]]


void FUN_009691b0(int param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = DAT_01258a20;
  uVar5 = 0;
  uVar4 = 0;
  uVar3 = 0;
  if (DAT_01258a20 != 0) {
    do {
      uVar1 = *(uint *)(param_1 + uVar3 * 4);
      if (uVar4 < uVar1) {
        uVar4 = uVar1;
        uVar5 = uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_01258a20);
  }
  *param_2 = uVar5;
  uVar4 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if ((uVar3 != uVar5) && (uVar1 = *(uint *)(param_1 + uVar3 * 4), uVar4 < uVar1)) {
        *param_3 = uVar3;
        uVar4 = uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

