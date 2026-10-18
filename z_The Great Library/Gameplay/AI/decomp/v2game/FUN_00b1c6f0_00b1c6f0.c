// FUN_00b1c6f0 @ 00b1c6f0 body=[[00b1c6f0, 00b1c756] [00b1c760, 00b1c87c]]


void FUN_00b1c6f0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte local_3;
  byte local_2;
  byte local_1;
  
  uVar5 = 0;
  if (*(int *)(in_ECX + 0x118) != 0) {
    do {
      *(undefined1 *)(in_ECX + 4 + uVar5 * 4) = *(undefined1 *)(in_ECX + 0xf4 + uVar5 * 4);
      *(undefined1 *)(in_ECX + 5 + uVar5 * 4) = *(undefined1 *)(in_ECX + 0xf5 + uVar5 * 4);
      *(undefined1 *)(in_ECX + 6 + uVar5 * 4) = *(undefined1 *)(in_ECX + 0xf6 + uVar5 * 4);
      *(undefined1 *)(in_ECX + 7 + uVar5 * 4) = *(undefined1 *)(in_ECX + 0xf7 + uVar5 * 4);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(in_ECX + 0x118));
  }
  if (uVar5 < *(int *)(in_ECX + 0x114) * 4 + 4U) {
    pbVar6 = (byte *)(in_ECX + 2 + uVar5 * 4);
    do {
      local_3 = pbVar6[-1];
      local_2 = *pbVar6;
      uVar1 = *(uint *)(in_ECX + 0x118);
      local_1 = pbVar6[1];
      bVar4 = pbVar6[-2];
      if (uVar5 % uVar1 == 0) {
        uVar2 = (uint)local_3;
        local_3 = (&DAT_00f04860)[local_2];
        local_2 = (&DAT_00f04860)[local_1];
        local_1 = (&DAT_00f04860)[bVar4];
        bVar4 = (&DAT_00f04860)[uVar2] ^ (&DAT_00f04960)[uVar5 / uVar1];
      }
      else if ((6 < uVar1) && (uVar5 % uVar1 == 4)) {
        bVar4 = (&DAT_00f04860)[bVar4];
        local_3 = (&DAT_00f04860)[local_3];
        local_2 = (&DAT_00f04860)[local_2];
        local_1 = (&DAT_00f04860)[local_1];
      }
      pbVar6[2] = *(byte *)(in_ECX + 4 + (uVar5 - uVar1) * 4) ^ bVar4;
      pbVar6[3] = *(byte *)(in_ECX + 5 + (uVar5 - *(int *)(in_ECX + 0x118)) * 4) ^ local_3;
      pbVar6[4] = *(byte *)(in_ECX + 6 + (uVar5 - *(int *)(in_ECX + 0x118)) * 4) ^ local_2;
      iVar3 = uVar5 - *(int *)(in_ECX + 0x118);
      uVar5 = uVar5 + 1;
      pbVar6[5] = *(byte *)(in_ECX + 7 + iVar3 * 4) ^ local_1;
      pbVar6 = pbVar6 + 4;
    } while (uVar5 < *(int *)(in_ECX + 0x114) * 4 + 4U);
  }
  return;
}

