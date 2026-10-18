// FUN_009b3f10 @ 009b3f10 body=[[009b3f10, 009b402f]]


void FUN_009b3f10(undefined4 param_1)

{
  short sVar1;
  undefined4 *puVar2;
  short *psVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = (int)(short)((uint)param_1 >> 0x10);
  if ((int *)in_ECX[0x38] == (int *)0x0) {
    psVar3 = (short *)(**(code **)(**(int **)in_ECX[0x18] + 0x14))(&local_10);
    local_10 = (int)(short)param_1 - (int)*psVar3 / 2;
    iVar4 = 0;
    iVar5 = 0;
    puVar2 = (undefined4 *)in_ECX[0x18];
    if ((char)in_ECX[0x40] == '\0') {
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]) {
        iVar4 = in_ECX[0x3b];
        psVar3 = (short *)(**(code **)(*(int *)*puVar2 + 0x14))(local_14);
        iVar5 = iVar5 + iVar4 + (int)*psVar3;
      }
      local_10._0_2_ = (short)local_10 - (short)(iVar5 / 2);
    }
    else {
      for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[2]) {
        local_c = iVar4 + in_ECX[0x3b];
        iVar4 = (**(code **)(*(int *)*puVar2 + 0x14))(local_14);
        iVar4 = local_c + *(short *)(iVar4 + 2);
        local_c = iVar4;
      }
      local_8 = local_8 - iVar4 / 2;
    }
  }
  else {
    psVar3 = (short *)(**(code **)(*(int *)in_ECX[0x38] + 0xd8))(&local_10);
    sVar1 = *psVar3;
    iVar4 = (**(code **)(*(int *)in_ECX[0x38] + 0xd8))(&local_10);
    local_8 = local_8 - (int)*(short *)(iVar4 + 2) / 2;
    local_10._0_2_ = (short)param_1 - sVar1 / 2;
  }
  local_10 = CONCAT22((short)local_8,(short)local_10);
  (**(code **)(*in_ECX + 0x48))(local_10);
  return;
}

