// FUN_0088d6b0 @ 0088d6b0 body=[[0088d6b0, 0088d797]]


void FUN_0088d6b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 *puVar5;
  undefined1 local_50 [16];
  int local_40;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(int *)(param_1 + 0x40) * 0x343fd + 0x269ec3;
  uVar2 = uVar1 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x40) = uVar2;
  FUN_008a8650((uVar2 >> 0x10 & 0x7fff) * (uVar1 >> 0x10 & 0x7fff));
  local_40 = *(int *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x24);
  if (*(int *)(iVar3 + 0xc) == 0) {
    local_1c = *(undefined4 *)(iVar3 + 0x10);
  }
  else {
    local_24 = *(undefined4 *)(iVar3 + 8);
    local_20 = *(undefined4 *)(iVar3 + 0xc);
  }
  if (DAT_01258a98 != 0) {
    iVar3 = FUN_009c1d40();
    if (iVar3 != 0) {
      if (*(int *)(in_ECX + 0x24) < 1) {
        puVar5 = local_50;
        uVar4 = FUN_008a6620(extraout_ECX,puVar5);
        FUN_008a8120(uVar4,puVar5);
        return;
      }
      FUN_004b1fc0(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + local_40 * 4),iVar3,local_50,
                   *(int *)(in_ECX + 0x24));
    }
  }
  return;
}

