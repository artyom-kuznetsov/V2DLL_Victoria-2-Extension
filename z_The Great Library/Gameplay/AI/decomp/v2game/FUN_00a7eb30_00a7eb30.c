// FUN_00a7eb30 @ 00a7eb30 body=[[00a7eb30, 00a7ec09]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int * FUN_00a7eb30(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int in_EAX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int aiStack_44 [8];
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  iVar7 = in_EAX * 0x10;
  aiStack_44[7] = 0xa7eb4e;
  iVar3 = -(iVar7 + 8);
  local_10 = iVar7;
  *(undefined4 *)(&stack0xffffffdc + iVar3) = 0xa110ca7e;
  puVar8 = (undefined4 *)(&stack0xffffffe0 + iVar3);
  local_14 = puVar8;
  puVar8[in_EAX * 4] = 0xa110ca7e;
  if (0 < in_EAX) {
    param_2 = param_2 - (int)param_3;
    local_c = in_EAX;
    do {
      iVar7 = 0;
      puVar9 = puVar8;
      do {
        puVar9 = puVar9 + 1;
        if (*param_3 < 0) {
          *(undefined1 *)((int)puVar8 + iVar7) = 0;
          if (iVar7 != 3) {
            *puVar9 = 0;
          }
        }
        else {
          *(char *)((int)puVar8 + iVar7) = (char)*param_3;
          if (iVar7 != 3) {
            *puVar9 = *(undefined4 *)(param_2 + (int)param_3);
          }
        }
        iVar7 = iVar7 + 1;
        param_3 = param_3 + 1;
      } while (iVar7 < 4);
      puVar8 = puVar8 + 4;
      local_c = local_c + -1;
    } while (local_c != 0);
    local_c = 0;
    iVar7 = local_10;
  }
  iVar1 = *param_1;
  *(undefined4 *)((int)aiStack_44 + iVar3 + 0x1c) = 0;
  *(int ***)((int)aiStack_44 + iVar3 + 0x18) = &local_8;
  *(undefined4 *)((int)aiStack_44 + iVar3 + 0x14) = 1;
  *(undefined4 *)((int)aiStack_44 + iVar3 + 0x10) = 0;
  *(undefined4 *)((int)aiStack_44 + iVar3 + 0xc) = 8;
  *(int *)((int)aiStack_44 + iVar3 + 8) = iVar7;
  *(int **)((int)aiStack_44 + iVar3 + 4) = param_1;
  pcVar2 = *(code **)(iVar1 + 0x68);
  puVar5 = (undefined1 *)((int)aiStack_44 + iVar3);
  *(undefined4 *)((int)aiStack_44 + iVar3) = 0xa7ebcd;
  (*pcVar2)();
  piVar4 = local_8;
  iVar3 = *local_8;
  *(undefined4 *)(puVar5 + -4) = 0;
  *(undefined4 **)(puVar5 + -8) = &local_18;
  *(int *)(puVar5 + -0xc) = iVar7;
  *(undefined4 *)(puVar5 + -0x10) = 0;
  *(int **)(puVar5 + -0x14) = piVar4;
  pcVar2 = *(code **)(iVar3 + 0x2c);
  puVar6 = puVar5 + -0x18;
  *(undefined4 *)(puVar5 + -0x18) = 0xa7ebe1;
  (*pcVar2)();
  puVar8 = local_14;
  *(int *)(puVar6 + -4) = iVar7;
  *(undefined4 **)(puVar6 + -8) = puVar8;
  *(undefined4 *)(puVar6 + -0xc) = local_18;
  *(undefined4 *)(puVar6 + -0x10) = 0xa7ebef;
  FID_conflict__memcpy(*(void **)(puVar6 + -0xc),*(void **)(puVar6 + -8),*(size_t *)(puVar6 + -4));
  pcVar2 = *(code **)(*local_8 + 0x30);
  *(int **)(puVar6 + -4) = local_8;
  *(undefined4 *)(puVar6 + -8) = 0xa7ebfd;
  (*pcVar2)();
  return local_8;
}

