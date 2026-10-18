// FUN_004be940 @ 004be940 body=[[004be940, 004be9a7]]


undefined4 FUN_004be940(uint *param_1)

{
  int iVar1;
  uint uVar2;
  int *in_EAX;
  
  iVar1 = in_EAX[1];
  if ((iVar1 - *in_EAX) / 0x220 != 0) {
    uVar2 = *param_1;
    if ((*(uint *)param_1[1] <= uVar2) && (uVar2 < ((uint *)param_1[1])[1])) {
      if (uVar2 != iVar1 - 0x220U) {
        FUN_004c0560(iVar1,uVar2,param_1);
      }
      FUN_004bf520();
      return 1;
    }
  }
  return 0;
}

