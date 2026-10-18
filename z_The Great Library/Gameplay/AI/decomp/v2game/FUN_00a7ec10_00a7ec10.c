// FUN_00a7ec10 @ 00a7ec10 body=[[00a7ec10, 00a7eca0]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int * FUN_00a7ec10(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int unaff_ESI;
  undefined1 *puVar8;
  int aiStack_34 [8];
  undefined4 local_c;
  int *local_8;
  
  aiStack_34[7] = 0xa7ec21;
  iVar2 = -(unaff_ESI * 2 + 8);
  *(undefined4 *)(&stack0xffffffec + iVar2) = 0xa110ca7e;
  puVar8 = &stack0xfffffff0 + iVar2;
  iVar3 = unaff_ESI * 2;
  iVar5 = 0;
  *(undefined4 *)(puVar8 + iVar3) = 0xa110ca7e;
  if (0 < unaff_ESI) {
    do {
      *(undefined2 *)(puVar8 + iVar5 * 2) = *(undefined2 *)(param_2 + iVar5 * 4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < unaff_ESI);
  }
  iVar5 = *param_1;
  *(undefined4 *)((int)aiStack_34 + iVar2 + 0x1c) = 0;
  *(int ***)((int)aiStack_34 + iVar2 + 0x18) = &local_8;
  *(undefined4 *)((int)aiStack_34 + iVar2 + 0x14) = 1;
  *(undefined4 *)((int)aiStack_34 + iVar2 + 0x10) = 0x65;
  *(undefined4 *)((int)aiStack_34 + iVar2 + 0xc) = 8;
  *(int *)((int)aiStack_34 + iVar2 + 8) = iVar3;
  *(int **)((int)aiStack_34 + iVar2 + 4) = param_1;
  pcVar1 = *(code **)(iVar5 + 0x6c);
  puVar6 = (undefined1 *)((int)aiStack_34 + iVar2);
  *(undefined4 *)((int)aiStack_34 + iVar2) = 0xa7ec68;
  (*pcVar1)();
  piVar4 = local_8;
  iVar2 = *local_8;
  *(undefined4 *)(puVar6 + -4) = 0;
  *(undefined4 **)(puVar6 + -8) = &local_c;
  *(int *)(puVar6 + -0xc) = iVar3;
  *(undefined4 *)(puVar6 + -0x10) = 0;
  *(int **)(puVar6 + -0x14) = piVar4;
  pcVar1 = *(code **)(iVar2 + 0x2c);
  puVar7 = puVar6 + -0x18;
  *(undefined4 *)(puVar6 + -0x18) = 0xa7ec7c;
  (*pcVar1)();
  *(int *)(puVar7 + -4) = iVar3;
  *(undefined1 **)(puVar7 + -8) = puVar8;
  *(undefined4 *)(puVar7 + -0xc) = local_c;
  *(undefined4 *)(puVar7 + -0x10) = 0xa7ec87;
  FID_conflict__memcpy(*(void **)(puVar7 + -0xc),*(void **)(puVar7 + -8),*(size_t *)(puVar7 + -4));
  iVar2 = *local_8;
  *(int **)(puVar7 + -4) = local_8;
  pcVar1 = *(code **)(iVar2 + 0x30);
  *(undefined4 *)(puVar7 + -8) = 0xa7ec95;
  (*pcVar1)();
  return local_8;
}

