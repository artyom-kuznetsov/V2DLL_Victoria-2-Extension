// FUN_0047e0b0 @ 0047e0b0 body=[[0047e0b0, 0047e0ea] [0047e0f0, 0047e17f]]


void FUN_0047e0b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int in_EDX;
  byte *pbVar8;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  
  if (1 < DAT_012587f4) {
    local_c = (int *)(in_EDX + 0x48);
    local_14 = (int)&DAT_013f1a98 - param_1;
    local_10 = DAT_012587f4 + -1;
    pbVar8 = (byte *)(in_EDX + 9);
    local_18 = param_1 - in_EDX;
    do {
      uVar7 = (uint)(pbVar8 + local_18)[local_14];
      local_28 = *(uint *)(DAT_013f1ae0 + uVar7 * 8);
      local_24 = *(int *)(DAT_013f1ae0 + 4 + uVar7 * 8);
      uVar7 = (uint)pbVar8[local_18];
      local_20 = *(uint *)(*(int *)(param_1 + 0x48) + uVar7 * 8);
      local_1c = *(int *)(*(int *)(param_1 + 0x48) + 4 + uVar7 * 8);
      if ((local_24 < local_1c) || ((local_24 <= local_1c && (local_28 <= local_20)))) {
        puVar6 = &local_28;
      }
      else {
        puVar6 = &local_20;
      }
      uVar7 = *puVar6;
      uVar4 = puVar6[1];
      bVar3 = *pbVar8;
      if (bVar3 == 0) {
        *pbVar8 = (byte)(local_c[1] - *local_c >> 3);
        FUN_00423920();
      }
      else {
        iVar5 = *local_c;
        puVar6 = (uint *)(iVar5 + (uint)bVar3 * 8);
        uVar2 = *puVar6;
        *puVar6 = *puVar6 + uVar7;
        piVar1 = (int *)(iVar5 + (uint)bVar3 * 8 + 4);
        *piVar1 = *piVar1 + uVar4 + (uint)CARRY4(uVar2,uVar7);
      }
      pbVar8 = pbVar8 + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

