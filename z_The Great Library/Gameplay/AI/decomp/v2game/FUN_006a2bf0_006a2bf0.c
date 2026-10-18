// FUN_006a2bf0 @ 006a2bf0 body=[[006a2bf0, 006a2c8a] [006a2c8e, 006a2d14] [006a2d18, 006a2e62]]


void FUN_006a2bf0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5
                 ,int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int local_24;
  
  if (param_4 + param_5 == 2) {
    cVar1 = FUN_00698910();
    if (cVar1 != '\0') {
      uVar5 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar5;
      return;
    }
  }
  else {
    if (param_4 <= param_5) {
      iVar2 = FUN_0098ed20();
      if (param_4 <= iVar2) {
        (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
        FUN_0098f4a0(param_1);
        if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_006a32b0(*(undefined4 *)(*(int *)(param_6 + 0x10) + 4),param_2);
        return;
      }
    }
    iVar2 = FUN_0098ed20();
    if (param_5 <= iVar2) {
      (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
      FUN_0098f4a0(param_2);
      if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_006a3340(param_1,**(undefined4 **)(param_6 + 0x10));
      return;
    }
    if (param_5 < param_4) {
      iVar2 = param_4 / 2;
      puVar4 = param_1 + iVar2;
      puVar3 = (undefined4 *)FUN_006a3930(param_2,param_3);
      iVar6 = (int)puVar3 - (int)param_2 >> 2;
    }
    else {
      iVar6 = param_5 / 2;
      puVar3 = param_2 + iVar6;
      puVar4 = (undefined4 *)FUN_006a3de0(param_1,param_2);
      iVar2 = (int)puVar4 - (int)param_1 >> 2;
    }
    uVar5 = FUN_0098f620();
    FUN_006a2bf0(param_1,puVar4,uVar5,iVar2,iVar6);
    FUN_006a2bf0(uVar5,puVar3,param_3,param_4 - iVar2,param_5 - iVar6);
  }
  return;
}

