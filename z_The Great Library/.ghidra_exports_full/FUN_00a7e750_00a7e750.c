// FUN_00a7e750 @ 00a7e750 body=[[00a7e750, 00a7eb22]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int * FUN_00a7e750(int *param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
                  int param_7,int *param_8)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int in_EAX;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  int aiStack_7c [8];
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  *param_8 = 3;
  if ((*(int *)(in_ECX + 0x14) == 0) ||
     ((*(int *)(in_ECX + 0x10) != 0 && (*(int *)(in_ECX + 0x10) != 1)))) {
    local_24 = 0;
  }
  else if (*(int *)(in_ECX + 0x14) == 1) {
    local_24 = in_ECX + 0x18;
  }
  else {
    local_24 = *(int *)(in_ECX + 0x18);
  }
  if (((param_3 == (undefined4 *)0x0) || (*(int *)((int)param_3 + 0x14) == 0)) ||
     ((*(int *)((int)param_3 + 0x10) != 0 && (*(int *)((int)param_3 + 0x10) != 1)))) {
    local_14 = (undefined4 *)0x0;
  }
  else if (*(int *)((int)param_3 + 0x14) == 1) {
    local_14 = (undefined4 *)((int)param_3 + 0x18);
  }
  else {
    local_14 = *(undefined4 **)((int)param_3 + 0x18);
  }
  if (((in_EAX == 0) || (*(int *)(in_EAX + 0x14) == 0)) ||
     ((*(int *)(in_EAX + 0x10) != 0 && (*(int *)(in_EAX + 0x10) != 1)))) {
    local_18 = 0;
  }
  else if (*(int *)(in_EAX + 0x14) == 1) {
    local_18 = in_EAX + 0x18;
  }
  else {
    local_18 = *(int *)(in_EAX + 0x18);
  }
  if (((param_4 == 0) || (*(int *)(param_4 + 0x14) == 0)) ||
     ((*(int *)(param_4 + 0x10) != 0 && (*(int *)(param_4 + 0x10) != 1)))) {
    local_8 = 0;
  }
  else if (*(int *)(param_4 + 0x14) == 1) {
    local_8 = param_4 + 0x18;
  }
  else {
    local_8 = *(int *)(param_4 + 0x18);
  }
  if (((param_5 == 0) || (*(int *)(param_5 + 0x14) == 0)) ||
     ((*(int *)(param_5 + 0x10) != 0 && (*(int *)(param_5 + 0x10) != 1)))) {
    local_c = 0;
  }
  else if (*(int *)(param_5 + 0x14) == 1) {
    local_c = param_5 + 0x18;
  }
  else {
    local_c = *(int *)(param_5 + 0x18);
  }
  if (((param_6 == 0) || (*(int *)(param_6 + 0x14) == 0)) ||
     ((*(int *)(param_6 + 0x10) != 0 && (*(int *)(param_6 + 0x10) != 1)))) {
    param_3 = (undefined4 *)0x0;
  }
  else if (*(int *)(param_6 + 0x14) == 1) {
    param_3 = (undefined4 *)(param_6 + 0x18);
  }
  else {
    param_3 = *(undefined4 **)(param_6 + 0x18);
  }
  if (((param_7 == 0) || (*(int *)(param_7 + 0x14) == 0)) ||
     ((*(int *)(param_7 + 0x10) != 0 && (*(int *)(param_7 + 0x10) != 1)))) {
    local_10 = 0;
  }
  else if (*(int *)(param_7 + 0x14) == 1) {
    local_10 = param_7 + 0x18;
  }
  else {
    local_10 = *(int *)(param_7 + 0x18);
  }
  if (local_14 != (undefined4 *)0x0) {
    *param_8 = 6;
  }
  if (local_18 != 0) {
    *param_8 = *param_8 + 4;
  }
  if (local_8 != 0) {
    *param_8 = *param_8 + 2;
  }
  if (local_c != 0) {
    *param_8 = *param_8 + 2;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_8 = *param_8 + 2;
  }
  if (local_10 != 0) {
    *param_8 = *param_8 + 2;
  }
  param_2 = *param_8 * param_2;
  aiStack_7c[7] = 0xa7e905;
  iVar2 = -(param_2 * 4 + 8);
  *(undefined4 *)(&stack0xffffffa4 + iVar2) = 0xa110ca7e;
  puVar10 = &stack0xffffffa8 + iVar2;
  iVar5 = param_2 * 4;
  *(undefined4 *)(puVar10 + iVar5) = 0xa110ca7e;
  local_4c = param_2 / *param_8;
  local_20 = 0;
  local_34 = iVar5;
  if (0 < local_4c) {
    local_1c = param_3;
    local_28 = local_14;
    local_2c = (undefined4 *)(local_18 + 8);
    puVar11 = (undefined4 *)(local_24 + 8);
    local_3c = local_8 - local_c;
    local_40 = (int)param_3 - local_c;
    local_48 = local_10 - local_c;
    local_38 = local_8 - (int)param_3;
    puVar7 = (undefined4 *)(local_c + 4);
    local_44 = local_10 - (int)param_3;
    param_2 = 0;
    local_24 = (int)local_14 - local_24;
    do {
      iVar5 = *param_8 * local_20;
      iVar6 = iVar5 + 3;
      bVar12 = local_14 != (undefined4 *)0x0;
      *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x18) = puVar11[-2];
      *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x1c) = puVar11[-1];
      *(undefined4 *)(&stack0xffffffa4 + iVar6 * 4 + iVar2) = *puVar11;
      puVar4 = local_28;
      if (bVar12) {
        iVar6 = iVar5 + 6;
        *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x18) = *local_28;
        iVar5 = local_24;
        *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x1c) = puVar4[1];
        *(undefined4 *)(&stack0xffffffa4 + iVar6 * 4 + iVar2) =
             *(undefined4 *)(iVar5 + (int)puVar11);
      }
      puVar4 = local_2c;
      if (local_18 != 0) {
        iVar6 = iVar6 + 4;
        *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x14) = local_2c[-2];
        *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x18) = puVar4[-1];
        *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x1c) = *puVar4;
        *(undefined4 *)(&stack0xffffffa4 + iVar6 * 4 + iVar2) = puVar4[1];
      }
      iVar5 = local_3c;
      if ((local_8 != 0) && (param_2 < *(int *)(param_4 + 0x14))) {
        *(undefined4 *)(puVar10 + iVar6 * 4) = *(undefined4 *)(local_38 + (int)local_1c);
        iVar6 = iVar6 + 2;
        *(undefined4 *)(&stack0xffffffa4 + iVar6 * 4 + iVar2) = *(undefined4 *)(iVar5 + (int)puVar7)
        ;
      }
      if ((local_c != 0) && (param_2 < *(int *)(param_5 + 0x14))) {
        iVar6 = iVar6 + 2;
        *(undefined4 *)((int)aiStack_7c + iVar6 * 4 + iVar2 + 0x1c) = puVar7[-1];
        *(undefined4 *)(&stack0xffffffa4 + iVar6 * 4 + iVar2) = *puVar7;
      }
      iVar5 = local_40;
      if ((param_3 != (undefined4 *)0x0) && (param_2 < *(int *)(param_6 + 0x14))) {
        *(undefined4 *)(puVar10 + iVar6 * 4) = *local_1c;
        iVar6 = iVar6 + 2;
        *(undefined4 *)(&stack0xffffffa4 + iVar6 * 4 + iVar2) = *(undefined4 *)(iVar5 + (int)puVar7)
        ;
      }
      iVar5 = local_48;
      if ((local_10 != 0) && (param_2 < *(int *)(param_7 + 0x14))) {
        *(undefined4 *)(puVar10 + iVar6 * 4) = *(undefined4 *)(local_44 + (int)local_1c);
        *(undefined4 *)(&stack0xffffffac + iVar6 * 4 + iVar2) = *(undefined4 *)(iVar5 + (int)puVar7)
        ;
      }
      local_20 = local_20 + 1;
      local_28 = local_28 + 3;
      local_2c = local_2c + 4;
      param_2 = param_2 + 2;
      local_1c = local_1c + 2;
      puVar11 = puVar11 + 3;
      puVar7 = puVar7 + 2;
    } while (local_20 < local_4c);
  }
  iVar6 = local_34;
  iVar5 = *param_8;
  *(undefined4 *)((int)aiStack_7c + iVar2 + 0x1c) = 0;
  *(int ***)((int)aiStack_7c + iVar2 + 0x18) = &local_30;
  *(undefined4 *)((int)aiStack_7c + iVar2 + 0x14) = 1;
  *(undefined4 *)((int)aiStack_7c + iVar2 + 0x10) = 0;
  *(undefined4 *)((int)aiStack_7c + iVar2 + 0xc) = 8;
  *param_8 = iVar5 * 4;
  iVar5 = *param_1;
  *(int *)((int)aiStack_7c + iVar2 + 8) = iVar6;
  *(int **)((int)aiStack_7c + iVar2 + 4) = param_1;
  pcVar1 = *(code **)(iVar5 + 0x68);
  puVar8 = (undefined1 *)((int)aiStack_7c + iVar2);
  *(undefined4 *)((int)aiStack_7c + iVar2) = 0xa7eae6;
  (*pcVar1)();
  piVar3 = local_30;
  iVar2 = local_34;
  iVar5 = *local_30;
  *(undefined4 *)(puVar8 + -4) = 0;
  *(undefined4 **)(puVar8 + -8) = &local_50;
  *(int *)(puVar8 + -0xc) = iVar2;
  *(undefined4 *)(puVar8 + -0x10) = 0;
  *(int **)(puVar8 + -0x14) = piVar3;
  pcVar1 = *(code **)(iVar5 + 0x2c);
  puVar9 = puVar8 + -0x18;
  *(undefined4 *)(puVar8 + -0x18) = 0xa7eafd;
  (*pcVar1)();
  *(int *)(puVar9 + -4) = iVar2;
  *(undefined1 **)(puVar9 + -8) = puVar10;
  *(undefined4 *)(puVar9 + -0xc) = local_50;
  *(undefined4 *)(puVar9 + -0x10) = 0xa7eb08;
  FID_conflict__memcpy(*(void **)(puVar9 + -0xc),*(void **)(puVar9 + -8),*(size_t *)(puVar9 + -4));
  iVar5 = *local_30;
  *(int **)(puVar9 + -4) = local_30;
  pcVar1 = *(code **)(iVar5 + 0x30);
  *(undefined4 *)(puVar9 + -8) = 0xa7eb16;
  (*pcVar1)();
  return local_30;
}

