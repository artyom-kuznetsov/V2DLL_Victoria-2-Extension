// FUN_004e0650 @ 004e0650 body=[[004e0650, 004e0746]]


void FUN_004e0650(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_2;
  do {
    iVar5 = iVar4 * 2 + 2;
    if (param_3 <= iVar5) {
      if (iVar5 == param_3) {
        FUN_004dcf00(param_3 * 0x160 + -0x160 + param_1);
        iVar4 = param_3 + -1;
      }
      FUN_004e07a0(param_1,iVar4,param_2,param_4,param_5);
      return;
    }
    uVar1 = *(uint *)(param_1 + -0x148 + iVar5 * 0x160);
    uVar2 = *(uint *)(param_1 + iVar5 * 0x160 + 0x18);
    uVar3 = uVar2;
    if (uVar1 <= uVar2) {
      uVar3 = uVar1;
    }
    uVar3 = FUN_00414bd0(uVar3);
    if (uVar3 == 0) {
      if (uVar1 <= uVar2) {
        uVar3 = (uint)(uVar2 != uVar1);
        goto LAB_004e06c9;
      }
LAB_004e06cb:
      iVar5 = iVar4 * 2 + 1;
    }
    else {
LAB_004e06c9:
      if ((int)uVar3 < 0) goto LAB_004e06cb;
    }
    FUN_004dcf00(iVar5 * 0x160 + param_1);
    iVar4 = iVar5;
  } while( true );
}

