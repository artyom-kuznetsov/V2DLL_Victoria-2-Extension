// FUN_00a89410 @ 00a89410 body=[[00a89410, 00a89625]]


void FUN_00a89410(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  u_long uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *local_c;
  int *local_8;
  
  puVar8 = (undefined8 *)(*(int *)(param_1 + 0x5b0) * 0x2c + 0x30 + param_1);
  puVar7 = (uint *)(param_1 + 0x5b4 + *(int *)(param_1 + 0x7bc) * 8);
  if (*(int **)(param_2 + 0xc4) != (int *)(param_2 + 0xc4)) {
    local_c = puVar7 + 2;
    local_8 = *(int **)(param_2 + 0xc4);
    do {
      if (((undefined8 *)(param_1 + 0x5b0U) <= puVar8) || ((uint *)(param_1 + 0x7bcU) <= local_c))
      break;
      uVar3 = (uint)*(ushort *)(param_2 + 0x94) - *(int *)(param_1 + 0x2c);
      uVar5 = local_8[10];
      if (uVar3 < uVar5) break;
      piVar4 = local_8 + 0x14;
      if ((*piVar4 != 0) && (uVar3 < *(int *)(*piVar4 + 0xc) + uVar5)) break;
      piVar1 = (int *)*local_8;
      if ((*piVar4 == 0) ||
         (uVar5 = *(int *)(param_2 + 0x68) + 7U & 0x1f, *(uint *)(param_2 + 0x68) = uVar5,
         uVar5 <= *(uint *)(param_2 + 0x60))) {
        puVar7[1] = (uint)puVar8;
        uVar5 = local_8[10];
        *puVar7 = uVar5;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + uVar5;
        *puVar8 = *(undefined8 *)(local_8 + 9);
        puVar8[1] = *(undefined8 *)(local_8 + 0xb);
        puVar8[2] = *(undefined8 *)(local_8 + 0xd);
        puVar8[3] = *(undefined8 *)(local_8 + 0xf);
        puVar8[4] = *(undefined8 *)(local_8 + 0x11);
        *(int *)(puVar8 + 5) = local_8[0x13];
        *(int *)local_8[1] = *local_8;
        *(int *)(*local_8 + 4) = local_8[1];
        if (*piVar4 == 0) {
          (*(code *)PTR__free_00f071fc)(local_8);
        }
        else {
          local_c = local_c + 2;
          puVar7[3] = *(uint *)(*piVar4 + 8);
          uVar5 = *(uint *)(*piVar4 + 0xc);
          puVar7 = puVar7 + 2;
          *puVar7 = uVar5;
          *(int *)((int)puVar8 + 4) = *(int *)((int)puVar8 + 4) + uVar5;
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *puVar7;
          puVar2 = *(undefined4 **)(param_2 + 0xb8);
          local_8[1] = (int)puVar2;
          *local_8 = param_2 + 0xb4;
          *puVar2 = local_8;
          *(int **)(param_2 + 0xb8) = local_8;
        }
        uVar6 = htonl(*(u_long *)((int)puVar8 + 4));
        *(u_long *)((int)puVar8 + 4) = uVar6;
        puVar8 = (undefined8 *)((int)puVar8 + 0x2c);
        puVar7 = puVar7 + 2;
        local_c = local_c + 2;
      }
      else {
        *(int *)*piVar4 = *(int *)*piVar4 + -1;
        piVar4 = (int *)*piVar4;
        if (*piVar4 == 0) {
          (*(code *)PTR__free_00f071fc)(piVar4[2]);
          (*(code *)PTR__free_00f071fc)(piVar4);
        }
        *(int *)local_8[1] = *local_8;
        *(int *)(*local_8 + 4) = local_8[1];
        (*(code *)PTR__free_00f071fc)(local_8);
      }
      local_8 = piVar1;
    } while (piVar1 != (int *)(param_2 + 0xc4));
  }
  *(int *)(param_1 + 0x5b0) = ((int)puVar8 + (-0x30 - param_1)) / 0x2c;
  *(uint *)(param_1 + 0x7bcU) = (int)puVar7 + (-0x5b4 - param_1) >> 3;
  return;
}

