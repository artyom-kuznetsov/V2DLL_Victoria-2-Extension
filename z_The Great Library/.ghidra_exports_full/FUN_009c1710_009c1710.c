// FUN_009c1710 @ 009c1710 body=[[009c1710, 009c1743]]


void FUN_009c1710(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) - *DAT_00f20c30;
  if (((*DAT_00f20c30 <= *(uint *)(param_1 + 8)) && (uVar1 < DAT_00f20c34)) &&
     (DAT_00f20c30[uVar1 * 2 + 1] < *(uint *)(param_1 + 0xc))) {
    DAT_00f20c30[uVar1 * 2 + 1] = *(uint *)(param_1 + 0xc);
  }
  return;
}

