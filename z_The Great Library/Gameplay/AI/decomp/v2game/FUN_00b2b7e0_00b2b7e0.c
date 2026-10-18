// FUN_00b2b7e0 @ 00b2b7e0 body=[[00b2b7e0, 00b2b88b]]


undefined4 FUN_00b2b7e0(int *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte local_5;
  
  iVar3 = 0;
  local_5 = 0x80;
  if (param_1[1] == 0) {
    return 6;
  }
  param_1[1] = param_1[1] + -1;
  bVar2 = *(byte *)*param_1;
  *param_1 = (int)((byte *)*param_1 + 1);
  *param_2 = 0;
  param_2[1] = 0;
  while( true ) {
    if ((local_5 & bVar2) == 0) {
      uVar4 = __allshl();
      uVar1 = *param_2;
      *param_2 = *param_2 + (uint)uVar4;
      param_2[1] = param_2[1] + (int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar4);
      return 0;
    }
    if (param_1[1] == 0) break;
    param_1[1] = param_1[1] + -1;
    *param_1 = *param_1 + 1;
    uVar4 = __allshl();
    *param_2 = *param_2 | (uint)uVar4;
    param_2[1] = param_2[1] | (uint)((ulonglong)uVar4 >> 0x20);
    local_5 = local_5 >> 1;
    iVar3 = iVar3 + 8;
    if (0x3f < iVar3) {
      return 0;
    }
  }
  return 6;
}

