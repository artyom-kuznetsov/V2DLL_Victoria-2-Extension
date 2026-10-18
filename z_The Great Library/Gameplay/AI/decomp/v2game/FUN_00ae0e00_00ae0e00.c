// FUN_00ae0e00 @ 00ae0e00 body=[[00ae0e00, 00ae1418]]


void FUN_00ae0e00(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *in_ECX;
  uint uVar7;
  int iVar8;
  
  in_ECX[0xb] = param_2;
  uVar1 = *(uint *)(param_1 + 0x84);
  if (uVar1 == 0) {
    FUN_00ae0a10();
    return;
  }
  if ((param_2 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX,uVar1 * 0x40 + 0x20,500,0x20,0,0,0);
    uVar7 = uVar2 & 0x1f;
    *in_ECX = uVar2;
    if ((short)uVar7 == 0) {
      uVar7 = 0x20;
    }
    uVar2 = (uVar2 - uVar7) + 0x20;
    in_ECX[3] = uVar2;
  }
  in_ECX[3] = uVar2;
  if ((in_ECX[0xb] & 2) == 0) {
    uVar2 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[1],uVar1 * 0x40 + 0x20,500,0x20,0,0,0);
    uVar7 = uVar2 & 0x1f;
    in_ECX[1] = uVar2;
    if ((short)uVar7 == 0) {
      uVar7 = 0x20;
    }
    uVar2 = (uVar2 - uVar7) + 0x20;
    in_ECX[4] = uVar2;
  }
  in_ECX[4] = uVar2;
  if ((in_ECX[0xb] & 4) == 0) {
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[2],uVar1 * 0x40 + 0x20,500,0x20,0,0,0);
    uVar7 = uVar2 & 0x1f;
    in_ECX[2] = uVar2;
    if ((short)uVar7 == 0) {
      uVar7 = 0x20;
    }
    uVar2 = (uVar2 - uVar7) + 0x20;
    in_ECX[5] = uVar2;
  }
  in_ECX[5] = uVar2;
  if ((in_ECX[0xb] & 0x10) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[6],uVar1 * 0x38,500,0x10,0,0,0);
  }
  in_ECX[6] = uVar2;
  if ((in_ECX[0xb] & 8) == 0) {
    uVar2 = *(uint *)(param_1 + 0x1c);
  }
  else {
    uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[7],uVar1 * 0x38,500,0x10,0,0,0);
  }
  in_ECX[7] = uVar2;
  uVar2 = (*(code *)PTR_FUN_00f01b0c)(in_ECX[8],uVar1 * 4,500,0x10,0,0,0);
  in_ECX[8] = uVar2;
  in_ECX[9] = uVar1;
  FID_conflict__memcpy((void *)in_ECX[7],*(void **)(param_1 + 0x1c),uVar1 * 0x38);
  FID_conflict__memcpy((void *)in_ECX[6],*(void **)(param_1 + 0x1c),uVar1 * 0x38);
  uVar2 = 0;
  if (3 < (int)uVar1) {
    iVar8 = 0;
    do {
      uVar7 = in_ECX[4];
      *(undefined4 *)(uVar7 + iVar8) = 0x3f800000;
      iVar3 = uVar7 + iVar8;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[3];
      *(undefined4 *)(uVar7 + iVar8) = 0x3f800000;
      iVar3 = uVar7 + iVar8;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[5];
      *(undefined4 *)(uVar7 + iVar8) = 0x3f800000;
      iVar3 = uVar7 + iVar8;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      *(undefined4 *)(in_ECX[8] + uVar2 * 4) = 7;
      uVar7 = in_ECX[4];
      *(undefined4 *)(uVar7 + 0x40 + iVar8) = 0x3f800000;
      iVar4 = uVar7 + 0x40 + iVar8;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      iVar5 = iVar8 + 0xc0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      iVar3 = iVar8 + 0x80;
      *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[3];
      *(undefined4 *)(uVar7 + 0x40 + iVar8) = 0x3f800000;
      iVar4 = uVar7 + 0x40 + iVar8;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[5];
      *(undefined4 *)(iVar8 + 0x40 + uVar7) = 0x3f800000;
      iVar4 = iVar8 + 0x40 + uVar7;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
      *(undefined4 *)(in_ECX[8] + 4 + uVar2 * 4) = 7;
      uVar7 = in_ECX[4];
      *(undefined4 *)(uVar7 + iVar3) = 0x3f800000;
      iVar4 = uVar7 + iVar3;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[3];
      *(undefined4 *)(uVar7 + iVar3) = 0x3f800000;
      iVar4 = uVar7 + iVar3;
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined4 *)(iVar4 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      *(undefined4 *)(iVar4 + 0x30) = 0;
      *(undefined4 *)(iVar4 + 0x34) = 0;
      *(undefined4 *)(iVar4 + 0x38) = 0;
      *(undefined4 *)(iVar4 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[5];
      *(undefined4 *)(uVar7 + iVar3) = 0x3f800000;
      iVar3 = uVar7 + iVar3;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      *(undefined4 *)(in_ECX[8] + 8 + uVar2 * 4) = 7;
      uVar7 = in_ECX[4];
      *(undefined4 *)(uVar7 + iVar5) = 0x3f800000;
      iVar3 = uVar7 + iVar5;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      uVar2 = uVar2 + 4;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      iVar8 = iVar8 + 0x100;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[3];
      *(undefined4 *)(uVar7 + iVar5) = 0x3f800000;
      iVar3 = uVar7 + iVar5;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      uVar7 = in_ECX[5];
      *(undefined4 *)(uVar7 + iVar5) = 0x3f800000;
      iVar5 = uVar7 + iVar5;
      *(undefined4 *)(iVar5 + 4) = 0;
      *(undefined4 *)(iVar5 + 8) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined4 *)(iVar5 + 0x24) = 0;
      *(undefined4 *)(iVar5 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      *(undefined4 *)(iVar5 + 0x30) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined4 *)(iVar5 + 0x3c) = 0x3f800000;
      *(undefined4 *)((in_ECX[8] - 4) + uVar2 * 4) = 7;
    } while (uVar2 < uVar1 - 3);
  }
  if (uVar2 < uVar1) {
    iVar8 = uVar2 << 6;
    do {
      uVar7 = in_ECX[4];
      *(undefined4 *)(uVar7 + iVar8) = 0x3f800000;
      iVar3 = uVar7 + iVar8;
      *(undefined4 *)(iVar3 + 0x14) = 0x3f800000;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(iVar3 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
      *(undefined4 *)(iVar3 + 0x18) = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
      *(undefined4 *)(iVar3 + 0x20) = 0;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      puVar6 = (undefined4 *)(in_ECX[3] + iVar8);
      *puVar6 = 0x3f800000;
      puVar6[5] = 0x3f800000;
      puVar6[10] = 0x3f800000;
      puVar6[0xf] = 0x3f800000;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      puVar6 = (undefined4 *)(in_ECX[5] + iVar8);
      *puVar6 = 0x3f800000;
      iVar8 = iVar8 + 0x40;
      puVar6[5] = 0x3f800000;
      puVar6[10] = 0x3f800000;
      puVar6[0xf] = 0x3f800000;
      puVar6[1] = 0;
      puVar6[2] = 0;
      puVar6[3] = 0;
      puVar6[4] = 0;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      puVar6[9] = 0;
      puVar6[0xb] = 0;
      puVar6[0xc] = 0;
      puVar6[0xd] = 0;
      puVar6[0xe] = 0;
      *(undefined4 *)((in_ECX[8] - 4) + uVar2 * 4) = 7;
    } while (uVar2 < uVar1);
  }
  in_ECX[10] = uVar1;
  return;
}

