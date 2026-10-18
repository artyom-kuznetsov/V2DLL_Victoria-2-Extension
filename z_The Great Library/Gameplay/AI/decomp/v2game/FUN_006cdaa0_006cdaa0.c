// FUN_006cdaa0 @ 006cdaa0 body=[[006cdaa0, 006cdb89]]


void FUN_006cdaa0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004f3500();
  iVar3 = FUN_004f3500();
  if (iVar3 < iVar2) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  iVar2 = FUN_004f3500();
  iVar3 = FUN_004f3500();
  if (iVar3 < iVar2) {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  iVar2 = FUN_004f3500();
  iVar3 = FUN_004f3500();
  if (iVar3 < iVar2) {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

