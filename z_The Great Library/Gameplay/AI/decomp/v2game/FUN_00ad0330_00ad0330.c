// FUN_00ad0330 @ 00ad0330 body=[[00ad0330, 00ad037c] [00ad0380, 00ad05a9]]


void FUN_00ad0330(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int local_a4;
  uint local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [64];
  undefined1 local_40 [64];
  
  FUN_00acf0d0();
  iVar3 = *(int *)(*(int *)(in_ECX + 0x1ac) + 0x110);
  if (iVar3 == 0) {
    local_a0 = (uint)*(ushort *)(in_ECX + 400);
    iVar3 = *(int *)(in_ECX + 0x18);
    iVar1 = *(int *)(in_ECX + 0x10);
    if (*(ushort *)(in_ECX + 400) != 0) {
      local_a4 = 0;
      do {
        uVar9 = (uint)*(ushort *)(local_a4 + *(int *)(in_ECX + 0x18c));
        iVar6 = *(int *)(in_ECX + 0x20);
        uVar4 = *(uint *)(iVar6 + uVar9 * 4);
        if ((uVar4 & 1) != 0) {
          iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x1ac) + 0x80) + uVar9 * 4) + 4);
          iVar2 = iVar3 + uVar9 * 0x38;
          if ((uVar4 & 2) == 0) {
            if ((iVar7 == -1) || ((*(byte *)(iVar6 + iVar7 * 4) & 2) == 0)) {
              FUN_00ad25a0(iVar2,iVar2 + 0x2c);
            }
            else {
              local_8c = 1.0 / *(float *)(iVar3 + 0x20 + iVar7 * 0x38);
              iVar6 = iVar3 + 0x20 + iVar7 * 0x38;
              local_88 = 1.0 / *(float *)(iVar6 + 4);
              local_84 = 1.0 / *(float *)(iVar6 + 8);
              FUN_00ad25a0(iVar2,iVar2 + 0x2c);
              FUN_00ad2900(&local_8c);
            }
          }
          else {
            if ((iVar7 == -1) || ((*(byte *)(iVar6 + iVar7 * 4) & 2) == 0)) {
              puVar10 = (undefined4 *)(uVar9 * 0x40 + iVar1);
              *puVar10 = *(undefined4 *)(iVar2 + 0x20);
              puVar10[1] = 0;
              puVar10[2] = 0;
              puVar10[3] = 0;
              puVar10[4] = 0;
              puVar10[5] = *(undefined4 *)(iVar2 + 0x24);
              puVar10[6] = 0;
              puVar10[7] = 0;
              puVar10[8] = 0;
              puVar10[9] = 0;
              puVar10[10] = *(undefined4 *)(iVar2 + 0x28);
              puVar10[0xb] = 0;
              puVar10[0xc] = 0;
              puVar10[0xd] = 0;
              puVar10[0xe] = 0;
              puVar10[0xf] = 0x3f800000;
              FUN_00ad24b0(iVar2);
              FUN_00ad27d0(local_40);
            }
            else {
              local_98 = 1.0 / *(float *)(iVar3 + 0x20 + iVar7 * 0x38);
              iVar6 = iVar3 + 0x20 + iVar7 * 0x38;
              puVar10 = (undefined4 *)(uVar9 * 0x40 + iVar1);
              local_94 = 1.0 / *(float *)(iVar6 + 4);
              local_90 = 1.0 / *(float *)(iVar6 + 8);
              FUN_00ad2460(iVar2 + 0x20);
              FUN_00ad24b0(iVar2);
              FUN_00ad27d0(local_80);
              FUN_00ad2900(&local_98);
            }
            puVar10[0xc] = *(undefined4 *)(iVar2 + 0x2c);
            puVar10[0xd] = *(undefined4 *)(iVar2 + 0x30);
            puVar10[0xe] = *(undefined4 *)(iVar2 + 0x34);
          }
        }
        local_a4 = local_a4 + 2;
        local_a0 = local_a0 - 1;
      } while (local_a0 != 0);
    }
  }
  else if (iVar3 == 1) {
    uVar4 = *(uint *)(in_ECX + 400);
    iVar3 = *(int *)(in_ECX + 0x18);
    uVar9 = 0;
    if (uVar4 != 0) {
      do {
        uVar8 = (uint)*(ushort *)(*(int *)(in_ECX + 0x18c) + uVar9 * 2);
        uVar5 = *(uint *)(*(int *)(in_ECX + 0x20) + uVar8 * 4);
        if ((uVar5 & 1) != 0) {
          iVar1 = iVar3 + uVar8 * 0x38;
          if ((uVar5 & 2) == 0) {
            FUN_00ad25a0(iVar1,iVar1 + 0x2c);
          }
          else {
            FUN_00ad1fe0(iVar1 + 0x10,iVar1,iVar1 + 0x20,iVar1 + 0x2c);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar4);
      return;
    }
  }
  return;
}

