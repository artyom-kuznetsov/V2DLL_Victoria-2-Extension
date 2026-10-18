// FUN_00aecc30 @ 00aecc30 body=[[00aecc30, 00aece67] [00aece70, 00aecef1]]


void FUN_00aecc30(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  if (in_ECX[1] != param_1[1]) {
    FUN_00aed3f0(in_ECX[1]);
    if (param_1[1] != param_1[2]) {
      FUN_00aed2e0(param_1[1]);
    }
  }
  uVar1 = *(uint *)(param_2 + 400);
  uVar7 = 0;
  if (3 < (int)uVar1) {
    do {
      iVar6 = (uint)*(ushort *)(*(int *)(param_2 + 0x18c) + uVar7 * 2) * 0x38;
      puVar3 = (undefined4 *)(*in_ECX + iVar6);
      puVar5 = (undefined4 *)(*param_1 + iVar6);
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[4] = puVar3[4];
      puVar5[5] = puVar3[5];
      puVar5[6] = puVar3[6];
      puVar5[7] = puVar3[7];
      puVar5[8] = puVar3[8];
      puVar5[9] = puVar3[9];
      puVar5[10] = puVar3[10];
      puVar5[0xb] = puVar3[0xb];
      puVar5[0xc] = puVar3[0xc];
      puVar5[0xd] = puVar3[0xd];
      iVar6 = (uint)*(ushort *)(*(int *)(param_2 + 0x18c) + 2 + uVar7 * 2) * 0x38;
      puVar3 = (undefined4 *)(*in_ECX + iVar6);
      puVar5 = (undefined4 *)(*param_1 + iVar6);
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[4] = puVar3[4];
      puVar5[5] = puVar3[5];
      puVar5[6] = puVar3[6];
      puVar5[7] = puVar3[7];
      puVar5[8] = puVar3[8];
      puVar5[9] = puVar3[9];
      puVar5[10] = puVar3[10];
      puVar5[0xb] = puVar3[0xb];
      puVar5[0xc] = puVar3[0xc];
      puVar5[0xd] = puVar3[0xd];
      iVar6 = *param_1;
      iVar2 = (uint)*(ushort *)(*(int *)(param_2 + 0x18c) + 4 + uVar7 * 2) * 0x38;
      iVar4 = *in_ECX + iVar2;
      *(undefined4 *)(iVar6 + iVar2) = *(undefined4 *)(*in_ECX + iVar2);
      iVar6 = iVar6 + iVar2;
      uVar7 = uVar7 + 4;
      *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
      *(undefined4 *)(iVar6 + 0x18) = *(undefined4 *)(iVar4 + 0x18);
      *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)(iVar4 + 0x1c);
      *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar4 + 0x20);
      *(undefined4 *)(iVar6 + 0x24) = *(undefined4 *)(iVar4 + 0x24);
      *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
      *(undefined4 *)(iVar6 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
      *(undefined4 *)(iVar6 + 0x30) = *(undefined4 *)(iVar4 + 0x30);
      *(undefined4 *)(iVar6 + 0x34) = *(undefined4 *)(iVar4 + 0x34);
      iVar6 = (uint)*(ushort *)(*(int *)(param_2 + 0x18c) + -2 + uVar7 * 2) * 0x38;
      puVar3 = (undefined4 *)(*in_ECX + iVar6);
      puVar5 = (undefined4 *)(*param_1 + iVar6);
      *puVar5 = *puVar3;
      puVar5[1] = puVar3[1];
      puVar5[2] = puVar3[2];
      puVar5[3] = puVar3[3];
      puVar5[4] = puVar3[4];
      puVar5[5] = puVar3[5];
      puVar5[6] = puVar3[6];
      puVar5[7] = puVar3[7];
      puVar5[8] = puVar3[8];
      puVar5[9] = puVar3[9];
      puVar5[10] = puVar3[10];
      puVar5[0xb] = puVar3[0xb];
      puVar5[0xc] = puVar3[0xc];
      puVar5[0xd] = puVar3[0xd];
    } while (uVar7 < uVar1 - 3);
  }
  for (; uVar7 < uVar1; uVar7 = uVar7 + 1) {
    iVar6 = (uint)*(ushort *)(*(int *)(param_2 + 0x18c) + uVar7 * 2) * 0x38;
    puVar3 = (undefined4 *)(*in_ECX + iVar6);
    puVar5 = (undefined4 *)(*param_1 + iVar6);
    *puVar5 = *puVar3;
    puVar5[1] = puVar3[1];
    puVar5[2] = puVar3[2];
    puVar5[3] = puVar3[3];
    puVar5[4] = puVar3[4];
    puVar5[5] = puVar3[5];
    puVar5[6] = puVar3[6];
    puVar5[7] = puVar3[7];
    puVar5[8] = puVar3[8];
    puVar5[9] = puVar3[9];
    puVar5[10] = puVar3[10];
    puVar5[0xb] = puVar3[0xb];
    puVar5[0xc] = puVar3[0xc];
    puVar5[0xd] = puVar3[0xd];
  }
  return;
}

