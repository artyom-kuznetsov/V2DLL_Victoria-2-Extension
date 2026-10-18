// FUN_00b1d240 @ 00b1d240 body=[[00b1d240, 00b1d42f]]


void FUN_00b1d240(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  
  if (param_1 == 0x80) {
    *(undefined4 *)(in_ECX + 0x114) = 0x80;
  }
  else if (param_1 == 0xc0) {
    *(undefined4 *)(in_ECX + 0x114) = 0xc0;
  }
  else if (param_1 == 0x100) {
    *(undefined4 *)(in_ECX + 0x114) = 0x100;
  }
  uVar4 = *(uint *)(in_ECX + 0x114) >> 5;
  *(uint *)(in_ECX + 0x118) = uVar4;
  *(uint *)(in_ECX + 0x114) = uVar4 + 6;
  uVar5 = 0;
  uVar4 = *(int *)(in_ECX + 0x118) * 4;
  if (uVar4 != 0) {
    do {
      *(undefined1 *)(in_ECX + 0xf4 + uVar5) = *(undefined1 *)(uVar5 + param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  uVar4 = 0;
  if (*(int *)(in_ECX + 0x118) != 0) {
    do {
      *(undefined1 *)(in_ECX + 4 + uVar4 * 4) = *(undefined1 *)(in_ECX + 0xf4 + uVar4 * 4);
      *(undefined1 *)(in_ECX + 5 + uVar4 * 4) = *(undefined1 *)(in_ECX + 0xf5 + uVar4 * 4);
      *(undefined1 *)(in_ECX + 6 + uVar4 * 4) = *(undefined1 *)(in_ECX + 0xf6 + uVar4 * 4);
      *(undefined1 *)(in_ECX + 7 + uVar4 * 4) = *(undefined1 *)(in_ECX + 0xf7 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(in_ECX + 0x118));
  }
  if (uVar4 < *(int *)(in_ECX + 0x114) * 4 + 4U) {
    pbVar8 = (byte *)(in_ECX + 2 + uVar4 * 4);
    do {
      bVar1 = pbVar8[-1];
      bVar2 = *pbVar8;
      uVar5 = *(uint *)(in_ECX + 0x118);
      bVar3 = pbVar8[1];
      param_2 = (uint)CONCAT12(bVar3,CONCAT11(bVar2,bVar1)) << 8;
      bVar7 = pbVar8[-2];
      if (uVar4 % uVar5 == 0) {
        param_2 = (uint)CONCAT12((&DAT_00f04860)[bVar7],
                                 CONCAT11((&DAT_00f04860)[bVar3],(&DAT_00f04860)[bVar2])) << 8;
        bVar7 = (&DAT_00f04860)[bVar1] ^ (&DAT_00f04960)[uVar4 / uVar5];
      }
      else if ((6 < uVar5) && (uVar4 % uVar5 == 4)) {
        bVar7 = (&DAT_00f04860)[bVar7];
        param_2 = (uint)CONCAT12((&DAT_00f04860)[bVar3],
                                 CONCAT11((&DAT_00f04860)[bVar2],(&DAT_00f04860)[bVar1])) << 8;
      }
      pbVar8[2] = *(byte *)(in_ECX + 4 + (uVar4 - uVar5) * 4) ^ bVar7;
      pbVar8[3] = *(byte *)(in_ECX + 5 + (uVar4 - *(int *)(in_ECX + 0x118)) * 4) ^ param_2._1_1_;
      pbVar8[4] = *(byte *)(in_ECX + 6 + (uVar4 - *(int *)(in_ECX + 0x118)) * 4) ^ param_2._2_1_;
      iVar6 = uVar4 - *(int *)(in_ECX + 0x118);
      uVar4 = uVar4 + 1;
      pbVar8[5] = *(byte *)(in_ECX + 7 + iVar6 * 4) ^ param_2._3_1_;
      pbVar8 = pbVar8 + 4;
    } while (uVar4 < *(int *)(in_ECX + 0x114) * 4 + 4U);
  }
  return;
}

