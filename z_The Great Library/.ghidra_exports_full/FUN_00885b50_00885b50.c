// FUN_00885b50 @ 00885b50 body=[[00885b50, 00885c95]]


void FUN_00885b50(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_158;
  undefined1 local_118 [8];
  int local_110;
  undefined1 local_10c [264];
  
  if (param_2 < 0x8fb) {
    if (param_2 == 0x8fa) {
      FUN_0094bd40();
      (**(code **)(local_158 + 0xc))(param_1);
      FUN_0042c2f0();
      return;
    }
    if (param_2 == 0x6a) {
      piVar3 = (int *)(param_1 + 0x228);
      piVar4 = &local_110;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      if (local_110 == 0x405) {
        *(undefined1 *)(in_ECX + 0x1c) = 1;
        return;
      }
      if (local_110 == 0x3de) {
        *(undefined1 *)(in_ECX + 0x1d) = 1;
        return;
      }
      puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_118,local_10c);
      *(undefined4 *)(in_ECX + 0x20) = *puVar1;
      *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
      return;
    }
    if (param_2 == 0x8cb) {
      piVar3 = (int *)(param_1 + 0x228);
      piVar4 = &local_110;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar4 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar4 = piVar4 + 1;
      }
      FUN_0098fd90();
      FUN_00408ad0();
      return;
    }
  }
  else if (param_2 == 0x8fb) {
    FUN_0094bd40();
    (**(code **)(local_158 + 0xc))(param_1);
    FUN_0042c2f0();
  }
  return;
}

