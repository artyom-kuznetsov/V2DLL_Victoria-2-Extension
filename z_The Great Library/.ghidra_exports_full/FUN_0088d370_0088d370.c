// FUN_0088d370 @ 0088d370 body=[[0088d370, 0088d45e]]


void FUN_0088d370(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 *puVar6;
  undefined1 local_50 [8];
  undefined4 local_48;
  int local_44;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = *(int *)(param_1 + 0x40) * 0x343fd + 0x269ec3;
  uVar2 = uVar1 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x40) = uVar2;
  FUN_008a8650((uVar2 >> 0x10 & 0x7fff) * (uVar1 >> 0x10 & 0x7fff));
  local_48 = *(undefined4 *)(param_1 + 8);
  local_44 = *(int *)(param_1 + 0xc);
  puVar3 = (undefined4 *)FUN_008a8dc0();
  local_24 = *puVar3;
  local_20 = puVar3[1];
  local_1c = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  if (DAT_01258a98 != 0) {
    iVar4 = FUN_009c1d40();
    if (iVar4 != 0) {
      if (*(int *)(in_ECX + 0x24) < 1) {
        puVar6 = local_50;
        uVar5 = FUN_008a6620(extraout_ECX,puVar6);
        FUN_008a8120(uVar5,puVar6);
        return;
      }
      FUN_00540a70(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + local_44 * 4),iVar4,local_50,
                   *(int *)(in_ECX + 0x24));
    }
  }
  return;
}

