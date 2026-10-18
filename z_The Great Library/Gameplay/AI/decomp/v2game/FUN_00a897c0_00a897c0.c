// FUN_00a897c0 @ 00a897c0 body=[[00a897c0, 00a8980c] [00a89810, 00a899e4]]


void FUN_00a897c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  u_long uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int *local_c;
  uint *local_8;
  
  puVar9 = (uint *)(param_1 + 0x5b4 + *(int *)(param_1 + 0x7bc) * 8);
  puVar8 = (undefined8 *)(*(int *)(param_1 + 0x5b0) * 0x2c + 0x30 + param_1);
  local_c = *(int **)(param_2 + 0xbc);
  puVar5 = puVar9;
  if (local_c != (int *)(param_2 + 0xbc)) {
    while ((local_8 = puVar5 + 2, puVar8 < (undefined8 *)(param_1 + 0x5b0U) &&
           (local_8 < (uint *)(param_1 + 0x7bcU)))) {
      puVar7 = (uint *)(local_c + 10);
      if (((uint)*(ushort *)(param_2 + 0x94) - *(int *)(param_1 + 0x2c) < *puVar7) ||
         ((piVar2 = (int *)*local_c, local_c[0x14] != 0 &&
          (((ushort)(*(ushort *)(param_2 + 0x94) - *(short *)(param_1 + 0x2c)) <
            (ushort)((short)*puVar7 + (short)local_c[8]) ||
           (*(uint *)(param_2 + 0x98) < (uint)*(ushort *)(local_c + 8) + *(int *)(param_2 + 0x9c))))
          ))) break;
      if (local_c[5] == 0) {
        iVar1 = *(int *)(param_2 + 0x8c) + *(int *)(param_2 + 0x90) * 4;
        local_c[5] = iVar1;
        local_c[6] = iVar1 * 0x20;
      }
      if (*(int **)(param_2 + 0xac) == (int *)(param_2 + 0xac)) {
        *(int *)(param_2 + 0x44) = local_c[5] + DAT_012586d0;
      }
      *(int *)local_c[1] = *local_c;
      *(int *)(*local_c + 4) = local_c[1];
      puVar3 = *(undefined4 **)(param_2 + 0xb0);
      *local_c = param_2 + 0xac;
      local_c[1] = (int)puVar3;
      *puVar3 = local_c;
      *(int **)(param_2 + 0xb0) = local_c;
      local_c[4] = DAT_012586d0;
      puVar9[1] = (uint)puVar8;
      uVar4 = *puVar7;
      *puVar9 = uVar4;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar4;
      *puVar8 = *(undefined8 *)(local_c + 9);
      puVar8[1] = *(undefined8 *)(local_c + 0xb);
      puVar8[2] = *(undefined8 *)(local_c + 0xd);
      puVar8[3] = *(undefined8 *)(local_c + 0xf);
      puVar8[4] = *(undefined8 *)(local_c + 0x11);
      *(int *)(puVar8 + 5) = local_c[0x13];
      if (local_c[0x14] != 0) {
        local_8 = puVar5 + 4;
        puVar9[3] = *(int *)(local_c[0x14] + 8) + local_c[7];
        puVar9 = puVar9 + 2;
        *puVar9 = (uint)*(ushort *)(local_c + 8);
        *(int *)((int)puVar8 + 4) = *(int *)((int)puVar8 + 4) + (uint)*(ushort *)(local_c + 8);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (uint)*(ushort *)(local_c + 8);
        *(int *)(param_2 + 0x9c) = *(int *)(param_2 + 0x9c) + (uint)*(ushort *)(local_c + 8);
      }
      uVar6 = htonl(*(u_long *)((int)puVar8 + 4));
      *(u_long *)((int)puVar8 + 4) = uVar6;
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
      puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
      puVar9 = puVar9 + 2;
      local_c = piVar2;
      puVar5 = local_8;
      if (piVar2 == (int *)(param_2 + 0xbc)) break;
    }
  }
  *(uint *)(param_1 + 0x7bcU) = (int)puVar9 + (-0x5b4 - param_1) >> 3;
  *(int *)(param_1 + 0x5b0) = ((int)puVar8 + (-0x30 - param_1)) / 0x2c;
  return;
}

