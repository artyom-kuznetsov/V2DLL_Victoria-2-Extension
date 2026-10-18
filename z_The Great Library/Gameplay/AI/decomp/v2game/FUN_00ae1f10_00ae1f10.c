// FUN_00ae1f10 @ 00ae1f10 body=[[00ae1f10, 00ae1f45] [00ae1f50, 00ae2247] [00ae2250, 00ae233b]]


void FUN_00ae1f10(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  int iVar9;
  
  iVar2 = *(int *)(in_ECX + 0x14);
  uVar3 = *(uint *)(iVar2 + 400);
  iVar4 = *(int *)(iVar2 + 0x1ac);
  iVar2 = *(int *)(iVar2 + 0x1c);
  uVar8 = 0;
  if (3 < (int)uVar3) {
    iVar9 = *(int *)(iVar4 + 0x30);
    do {
      iVar6 = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x18c) + uVar8 * 2) * 0x38;
      puVar1 = (undefined4 *)(iVar9 + 0x2c + iVar6);
      *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar6 + iVar2);
      *(undefined4 *)(iVar9 + 4 + iVar6) = *(undefined4 *)(iVar6 + 4 + iVar2);
      *(undefined4 *)(iVar9 + 8 + iVar6) = *(undefined4 *)(iVar6 + 8 + iVar2);
      *(undefined4 *)(iVar9 + 0xc + iVar6) = *(undefined4 *)(iVar6 + 0xc + iVar2);
      *(undefined4 *)(iVar9 + 0x10 + iVar6) = *(undefined4 *)(iVar6 + 0x10 + iVar2);
      *(undefined4 *)(iVar9 + 0x14 + iVar6) = *(undefined4 *)(iVar6 + 0x14 + iVar2);
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)(iVar6 + 0x18 + iVar2);
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = *(undefined4 *)(iVar6 + 0x1c + iVar2);
      *(undefined4 *)(iVar9 + 0x20 + iVar6) = *(undefined4 *)(iVar6 + 0x20 + iVar2);
      *(undefined4 *)(iVar9 + 0x24 + iVar6) = *(undefined4 *)(iVar6 + 0x24 + iVar2);
      *(undefined4 *)(iVar9 + 0x28 + iVar6) = *(undefined4 *)(iVar6 + 0x28 + iVar2);
      *puVar1 = *(undefined4 *)(iVar6 + 0x2c + iVar2);
      puVar1[1] = *(undefined4 *)(iVar6 + 0x30 + iVar2);
      puVar1[2] = *(undefined4 *)(iVar6 + 0x34 + iVar2);
      iVar6 = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x18c) + 2 + uVar8 * 2) * 0x38;
      puVar1 = (undefined4 *)(iVar9 + 0x2c + iVar6);
      *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar6 + iVar2);
      *(undefined4 *)(iVar9 + 4 + iVar6) = *(undefined4 *)(iVar6 + 4 + iVar2);
      *(undefined4 *)(iVar9 + 8 + iVar6) = *(undefined4 *)(iVar6 + 8 + iVar2);
      *(undefined4 *)(iVar9 + 0xc + iVar6) = *(undefined4 *)(iVar6 + 0xc + iVar2);
      *(undefined4 *)(iVar9 + 0x10 + iVar6) = *(undefined4 *)(iVar6 + 0x10 + iVar2);
      *(undefined4 *)(iVar9 + 0x14 + iVar6) = *(undefined4 *)(iVar6 + 0x14 + iVar2);
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)(iVar6 + 0x18 + iVar2);
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = *(undefined4 *)(iVar6 + 0x1c + iVar2);
      *(undefined4 *)(iVar9 + 0x20 + iVar6) = *(undefined4 *)(iVar6 + 0x20 + iVar2);
      *(undefined4 *)(iVar9 + 0x24 + iVar6) = *(undefined4 *)(iVar6 + 0x24 + iVar2);
      *(undefined4 *)(iVar9 + 0x28 + iVar6) = *(undefined4 *)(iVar6 + 0x28 + iVar2);
      *puVar1 = *(undefined4 *)(iVar6 + 0x2c + iVar2);
      puVar1[1] = *(undefined4 *)(iVar6 + 0x30 + iVar2);
      puVar1[2] = *(undefined4 *)(iVar6 + 0x34 + iVar2);
      iVar6 = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x18c) + 4 + uVar8 * 2) * 0x38;
      puVar1 = (undefined4 *)(iVar9 + 0x2c + iVar6);
      *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar6 + iVar2);
      uVar8 = uVar8 + 4;
      *(undefined4 *)(iVar9 + 4 + iVar6) = *(undefined4 *)(iVar6 + 4 + iVar2);
      *(undefined4 *)(iVar9 + 8 + iVar6) = *(undefined4 *)(iVar6 + 8 + iVar2);
      *(undefined4 *)(iVar9 + 0xc + iVar6) = *(undefined4 *)(iVar6 + 0xc + iVar2);
      *(undefined4 *)(iVar9 + 0x10 + iVar6) = *(undefined4 *)(iVar6 + 0x10 + iVar2);
      *(undefined4 *)(iVar9 + 0x14 + iVar6) = *(undefined4 *)(iVar6 + 0x14 + iVar2);
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)(iVar6 + 0x18 + iVar2);
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = *(undefined4 *)(iVar6 + 0x1c + iVar2);
      *(undefined4 *)(iVar9 + 0x20 + iVar6) = *(undefined4 *)(iVar6 + 0x20 + iVar2);
      *(undefined4 *)(iVar9 + 0x24 + iVar6) = *(undefined4 *)(iVar6 + 0x24 + iVar2);
      *(undefined4 *)(iVar9 + 0x28 + iVar6) = *(undefined4 *)(iVar6 + 0x28 + iVar2);
      *puVar1 = *(undefined4 *)(iVar6 + 0x2c + iVar2);
      puVar1[1] = *(undefined4 *)(iVar6 + 0x30 + iVar2);
      puVar1[2] = *(undefined4 *)(iVar6 + 0x34 + iVar2);
      iVar6 = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x18c) + -2 + uVar8 * 2) * 0x38;
      puVar1 = (undefined4 *)(iVar9 + 0x2c + iVar6);
      *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar6 + iVar2);
      *(undefined4 *)(iVar9 + 4 + iVar6) = *(undefined4 *)(iVar6 + 4 + iVar2);
      *(undefined4 *)(iVar9 + 8 + iVar6) = *(undefined4 *)(iVar6 + 8 + iVar2);
      *(undefined4 *)(iVar9 + 0xc + iVar6) = *(undefined4 *)(iVar6 + 0xc + iVar2);
      *(undefined4 *)(iVar9 + 0x10 + iVar6) = *(undefined4 *)(iVar6 + 0x10 + iVar2);
      *(undefined4 *)(iVar9 + 0x14 + iVar6) = *(undefined4 *)(iVar6 + 0x14 + iVar2);
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)(iVar6 + 0x18 + iVar2);
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = *(undefined4 *)(iVar6 + 0x1c + iVar2);
      *(undefined4 *)(iVar9 + 0x20 + iVar6) = *(undefined4 *)(iVar6 + 0x20 + iVar2);
      *(undefined4 *)(iVar9 + 0x24 + iVar6) = *(undefined4 *)(iVar6 + 0x24 + iVar2);
      *(undefined4 *)(iVar9 + 0x28 + iVar6) = *(undefined4 *)(iVar6 + 0x28 + iVar2);
      *puVar1 = *(undefined4 *)(iVar6 + 0x2c + iVar2);
      puVar1[1] = *(undefined4 *)(iVar6 + 0x30 + iVar2);
      puVar1[2] = *(undefined4 *)(iVar6 + 0x34 + iVar2);
    } while (uVar8 < uVar3 - 3);
  }
  if (uVar8 < uVar3) {
    iVar9 = *(int *)(iVar4 + 0x30);
    do {
      iVar6 = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x18c) + uVar8 * 2) * 0x38;
      puVar1 = (undefined4 *)(iVar9 + 0x2c + iVar6);
      uVar8 = uVar8 + 1;
      *(undefined4 *)(iVar9 + iVar6) = *(undefined4 *)(iVar6 + iVar2);
      *(undefined4 *)(iVar9 + 4 + iVar6) = *(undefined4 *)(iVar6 + 4 + iVar2);
      *(undefined4 *)(iVar9 + 8 + iVar6) = *(undefined4 *)(iVar6 + 8 + iVar2);
      *(undefined4 *)(iVar9 + 0xc + iVar6) = *(undefined4 *)(iVar6 + 0xc + iVar2);
      *(undefined4 *)(iVar9 + 0x10 + iVar6) = *(undefined4 *)(iVar6 + 0x10 + iVar2);
      *(undefined4 *)(iVar9 + 0x14 + iVar6) = *(undefined4 *)(iVar6 + 0x14 + iVar2);
      *(undefined4 *)(iVar9 + 0x18 + iVar6) = *(undefined4 *)(iVar6 + 0x18 + iVar2);
      *(undefined4 *)(iVar9 + 0x1c + iVar6) = *(undefined4 *)(iVar6 + 0x1c + iVar2);
      *(undefined4 *)(iVar9 + 0x20 + iVar6) = *(undefined4 *)(iVar6 + 0x20 + iVar2);
      *(undefined4 *)(iVar9 + 0x24 + iVar6) = *(undefined4 *)(iVar6 + 0x24 + iVar2);
      *(undefined4 *)(iVar9 + 0x28 + iVar6) = *(undefined4 *)(iVar6 + 0x28 + iVar2);
      *puVar1 = *(undefined4 *)(iVar6 + 0x2c + iVar2);
      puVar1[1] = *(undefined4 *)(iVar6 + 0x30 + iVar2);
      puVar1[2] = *(undefined4 *)(iVar6 + 0x34 + iVar2);
    } while (uVar8 < uVar3);
  }
  iVar2 = *(int *)(in_ECX + 8);
  while (iVar2 = iVar2 + -1, iVar2 != -1) {
    iVar9 = *(int *)(*(int *)(in_ECX + 4) + iVar2 * 4);
    if (((*(ushort *)(iVar9 + 0x9c) >> 10 & 1) != 0) && (0.001 <= *(float *)(iVar9 + 0x2c))) {
      if (*(int *)(iVar9 + 0xa8) == 0) {
        (**(code **)(**(int **)(iVar9 + 0x8c) + 0x28))(iVar4 + 0x30,iVar4 + 0x40,iVar9);
      }
      else {
        FUN_00b08a40(iVar4 + 0x30,iVar4 + 0x40);
      }
      FUN_00aed1d0(iVar4 + 0x40,*(undefined4 *)(iVar9 + 0x2c),iVar9);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x14);
  uVar8 = 0;
  bVar5 = (byte)*(undefined4 *)(iVar2 + 0x1d8) & 0x1f;
  if (uVar3 != 0) {
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x18c) + uVar8 * 2);
      if ((*(uint *)(*(int *)(*(int *)(iVar4 + 0x80) + uVar7 * 4) + 8) &
          (1 << bVar5 | 1U >> 0x20 - bVar5)) == 0) {
        iVar9 = *(int *)(iVar2 + 0x1c) + uVar7 * 0x38;
      }
      else {
        iVar9 = *(int *)(iVar4 + 0x30) + uVar7 * 0x38;
      }
      FUN_00ae1420(uVar7,iVar9);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar3);
  }
  return;
}

