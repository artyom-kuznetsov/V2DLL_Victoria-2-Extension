// FUN_0047df80 @ 0047df80 body=[[0047df80, 0047dfad] [0047dfb0, 0047e03d]]


void FUN_0047df80(int param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int local_8;
  
  if (0 < DAT_012587f4) {
    pbVar6 = (byte *)(param_1 + 8);
    local_8 = DAT_012587f4;
    do {
      bVar2 = pbVar6[param_2 - param_1];
      if (*pbVar6 == 0) {
        if (bVar2 != 0) {
          iVar5 = *(int *)((uint)bVar2 * 8 + 4 + *(int *)(param_2 + 0x48));
          if ((-1 < iVar5) &&
             ((0 < iVar5 || (*(int *)((uint)bVar2 * 8 + *(int *)(param_2 + 0x48)) != 0)))) {
            *pbVar6 = (byte)(*(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x48) >> 3);
            FUN_00423920();
          }
        }
      }
      else {
        puVar1 = (uint *)(*(int *)(param_1 + 0x48) + (uint)*pbVar6 * 8);
        uVar3 = *(uint *)(*(int *)(param_2 + 0x48) + (uint)bVar2 * 8);
        uVar4 = *(uint *)(*(int *)(param_2 + 0x48) + 4 + (uint)bVar2 * 8);
        if (((int)puVar1[1] <= (int)uVar4) && (((int)puVar1[1] < (int)uVar4 || (*puVar1 < uVar3))))
        {
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
        }
      }
      pbVar6 = pbVar6 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

