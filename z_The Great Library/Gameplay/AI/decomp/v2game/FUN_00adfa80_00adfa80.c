// FUN_00adfa80 @ 00adfa80 body=[[00adfa80, 00adfbc4]]


void FUN_00adfa80(void)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  uint local_c;
  
  uVar2 = *(uint *)(*(int *)(in_ECX[4] + 0x1ac) + 0x84);
  uVar3 = in_ECX[1];
  if (((uVar2 != uVar3) && (in_ECX[1] = uVar2, uVar3 < uVar2)) && ((uint)in_ECX[2] < uVar2)) {
    FUN_00adf950(uVar2);
  }
  iVar7 = 0;
  local_c = 0;
  if (uVar2 != 0) {
    do {
      uVar3 = *(uint *)(*(int *)(in_ECX[5] + 0x1ac) + 0x84);
      uVar5 = 0;
      if (uVar3 != 0) {
        piVar4 = *(int **)(*(int *)(in_ECX[5] + 0x1ac) + 0x80);
        piVar8 = piVar4;
        do {
          if (*(int *)(*piVar8 + 0x10) ==
              *(int *)(*(int *)(*(int *)(*(int *)(in_ECX[4] + 0x1ac) + 0x80) + local_c * 4) + 0x10))
          {
            iVar6 = piVar4[uVar5];
            goto LAB_00adfb18;
          }
          uVar5 = uVar5 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar5 < uVar3);
      }
      iVar6 = 0;
LAB_00adfb18:
      *(int *)(iVar7 + 0x80 + *in_ECX) = iVar6;
      iVar6 = *in_ECX;
      *(undefined4 *)(iVar6 + iVar7) = 0x3f800000;
      iVar6 = iVar6 + iVar7;
      *(undefined4 *)(iVar6 + 0x14) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x28) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x3c) = 0x3f800000;
      *(undefined4 *)(iVar6 + 4) = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(undefined4 *)(iVar6 + 0x18) = 0;
      *(undefined4 *)(iVar6 + 0x1c) = 0;
      *(undefined4 *)(iVar6 + 0x20) = 0;
      *(undefined4 *)(iVar6 + 0x24) = 0;
      *(undefined4 *)(iVar6 + 0x2c) = 0;
      *(undefined4 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x34) = 0;
      *(undefined4 *)(iVar6 + 0x38) = 0;
      puVar1 = (undefined4 *)(iVar7 + 0x40 + *in_ECX);
      *puVar1 = 0x3f800000;
      iVar7 = iVar7 + 0x84;
      puVar1[5] = 0x3f800000;
      puVar1[10] = 0x3f800000;
      puVar1[0xf] = 0x3f800000;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      local_c = local_c + 1;
    } while (local_c < uVar2);
  }
  return;
}

