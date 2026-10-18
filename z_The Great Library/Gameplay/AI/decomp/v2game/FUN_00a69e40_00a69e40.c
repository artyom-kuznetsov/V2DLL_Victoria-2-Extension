// FUN_00a69e40 @ 00a69e40 body=[[00a69e40, 00a69f62] [00a69f66, 00a6a17a] [00a6a17e, 00a6a194]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a69e40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  DWORD DVar6;
  int *in_ECX;
  uint uVar7;
  undefined4 unaff_EDI;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_1e0 [4];
  uint local_1dc;
  undefined4 local_1d8;
  uint local_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined **appuStack_148 [43];
  undefined **appuStack_9c [19];
  void *pvStack_50;
  undefined1 uStack_48;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b56d2c;
  pvStack_14 = ExceptionList;
  uVar7 = *(uint *)(in_ECX[7] + 0x68);
  ExceptionList = &pvStack_14;
  *(uint *)(in_ECX[7] + 0x68) = uVar7 + 1;
  iVar3 = *in_ECX;
  local_1d8 = 0;
  uVar11 = 1;
  local_1dc = 0;
  local_1d4 = uVar7;
  uVar2 = FUN_00a603d0(*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0x10));
  (**(code **)(iVar3 + 0x14))(&local_1d8,8,uVar2,uVar11);
  uStack_1cc = 0xf;
  uStack_1d0 = 0;
  auStack_1e0[0] = 0;
  FUN_00409350("server.cpp",10);
  uStack_1c = 0;
  uVar11 = FUN_004015b0(auStack_1e0,0xae5,0x301);
  uVar10 = 0;
  pcVar8 = "Assigning machine id ";
  uStack_1c = CONCAT31(uStack_1c._1_3_,1);
  FUN_00987d50(uVar11,"Assigning machine id ",0x15,0);
  uVar11 = FUN_00455470(uVar11,uVar10);
  FUN_00401280(uVar11);
  uStack_34 = uStack_34 & 0xffffff00;
  FUN_00987ac0(appuStack_148);
  appuStack_148[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_148);
  uStack_34 = 0xffffffff;
  if (0xf < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar2);
  }
  iVar3 = FUN_00aae9af(0x20);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined1 *)(iVar3 + 0x18) = 0;
    *(char **)(iVar3 + 0x1c) = pcVar8;
  }
  uVar7 = *(uint *)(iVar3 + 0x1c) % (uint)in_ECX[0x17];
  piVar4 = (int *)FUN_00aae9af(8);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar9 = *(int *)(in_ECX[0x18] + uVar7 * 4);
    *piVar4 = iVar3;
    piVar4[1] = iVar9;
  }
  *(int **)(in_ECX[0x18] + uVar7 * 4) = piVar4;
  in_ECX[0x16] = in_ECX[0x16] + 1;
  iVar3 = in_ECX[7];
  iVar9 = *(int *)(iVar3 + 0x5c);
  puVar5 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = pcVar8;
    puVar5[1] = iVar9;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  iVar1 = *(int *)(iVar3 + 0x60);
  *(undefined4 **)(iVar3 + 0x5c) = puVar5;
  *(int *)(iVar3 + 0x60) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(iVar3 + 0x58) = puVar5;
  }
  else {
    *(undefined4 **)(iVar9 + 8) = puVar5;
  }
  puVar5 = (undefined4 *)FUN_00aae9af(4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = pcVar8;
  }
  *(undefined4 **)(param_2 + 0x14) = puVar5;
  DVar6 = timeGetTime();
  DAT_012586d0 = DVar6 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  iVar3 = *in_ECX;
  uVar2 = FUN_00a603d0(*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0x10));
  (**(code **)(iVar3 + 0x6c))(uVar2);
  uVar2 = FUN_00a603d0(*(undefined4 *)(param_2 + 0xc),*(undefined2 *)(param_2 + 0x10));
  *(undefined4 *)(in_ECX[7] + 0x10c) = uVar2;
  for (puVar5 = *(undefined4 **)(in_ECX[7] + 4); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)puVar5[2]) {
    (**(code **)(*(int *)*puVar5 + 4))(6);
  }
  DVar6 = timeGetTime();
  DAT_012586d0 = DVar6 - _DAT_01258b70;
  FUN_00a899f0(0,0);
  uStack_1cc = 0xf;
  uStack_1d0 = 0;
  auStack_1e0[0] = 0;
  FUN_00409350("server.cpp",10);
  uStack_38 = 2;
  uVar2 = FUN_004015b0(auStack_1e0,0xb01,0x301);
  uStack_38 = CONCAT31(uStack_38._1_3_,3);
  FUN_00987d50(uVar2,"New Client Connected",0x14,0);
  FUN_00401280(uVar2);
  uStack_48 = 2;
  FUN_00987ac0(appuStack_9c);
  appuStack_9c[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_9c);
  if (local_1dc < 0x10) {
    ExceptionList = pvStack_50;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(unaff_EDI);
}

