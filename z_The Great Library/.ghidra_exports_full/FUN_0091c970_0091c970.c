// FUN_0091c970 @ 0091c970 body=[[0091c970, 0091ca8f]]


bool FUN_0091c970(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int local_14;
  int local_10 [3];
  
  iVar6 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  if (*(int *)(iVar6 + 0x34) != 0) {
    iVar6 = *(int *)(iVar6 + 0x34);
    local_10[1] = iVar6 + 0x3c;
    local_10[0] = iVar6 + 0x2c;
    local_14 = 0;
    do {
      puVar1 = (uint *)local_10[local_14];
      puVar5 = (undefined4 *)*puVar1;
      while ((puVar4 = puVar5, (undefined4 *)*puVar1 <= puVar4 && (puVar4 < (undefined4 *)puVar1[1])
             )) {
        puVar5 = puVar4 + 2;
        if ((puVar4[1] != *(int *)(in_ECX + 0xc)) && (puVar4[1] != *(int *)(in_ECX + 0x14))) {
          puVar2 = (undefined4 *)param_1[1];
          if ((puVar4 < puVar2) && ((undefined4 *)*param_1 <= puVar4)) {
            iVar6 = (int)puVar4 - (int)*param_1 >> 3;
            if (puVar2 == (undefined4 *)param_1[2]) {
              FUN_00810820();
            }
            puVar4 = (undefined4 *)param_1[1];
            if (puVar4 != (undefined4 *)0x0) {
              uVar3 = *param_1;
              *puVar4 = *(undefined4 *)(uVar3 + iVar6 * 8);
              puVar4[1] = *(undefined4 *)(uVar3 + 4 + iVar6 * 8);
            }
            param_1[1] = param_1[1] + 8;
          }
          else {
            if (puVar2 == (undefined4 *)param_1[2]) {
              FUN_00810820();
            }
            puVar2 = (undefined4 *)param_1[1];
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = *puVar4;
              puVar2[1] = puVar4[1];
            }
            param_1[1] = param_1[1] + 8;
          }
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < 2);
  }
  return 0 < (int)(param_1[1] - *param_1 & 0xfffffff8);
}

