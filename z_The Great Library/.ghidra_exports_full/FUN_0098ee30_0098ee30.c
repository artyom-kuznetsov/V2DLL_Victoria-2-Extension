// FUN_0098ee30 @ 0098ee30 body=[[0098ee30, 0098eedc] [0098eee0, 0098ef50] [0098ef54, 0098f042]]


void FUN_0098ee30(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_24;
  
  if (param_4 + param_5 == 2) {
    iVar1 = *param_1;
    if (*(float *)(*(int *)(iVar1 + 0x13c) + 0x98) < *(float *)(*(int *)(*param_2 + 0x13c) + 0x98))
    {
      *param_1 = *param_2;
      *param_2 = iVar1;
      return;
    }
  }
  else {
    if (param_4 <= param_5) {
      iVar1 = FUN_0098ed20();
      if (param_4 <= iVar1) {
        (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
        FUN_0098f4a0(param_1);
        if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_0098f500();
        return;
      }
    }
    iVar1 = FUN_0098ed20();
    if (param_5 <= iVar1) {
      (*(undefined4 **)(param_6 + 0x10))[1] = **(undefined4 **)(param_6 + 0x10);
      FUN_0098f4a0(param_2);
      if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      FUN_0098f590();
      return;
    }
    if (param_5 < param_4) {
      piVar2 = param_1 + param_4 / 2;
      param_2 = (int *)FUN_0098f9b0();
    }
    else {
      param_2 = param_2 + param_5 / 2;
      piVar2 = (int *)FUN_0098fa10();
    }
    uVar3 = FUN_0098f620();
    FUN_0098ee30(param_1,piVar2);
    FUN_0098ee30(uVar3,param_2);
  }
  return;
}

