// FUN_007c39a0 @ 007c39a0 body=[[007c39a0, 007c39d8] [007c39e2, 007c3a3d] [007c3a41, 007c3a91] [007c3a95, 007c3b5e] [007c3b62, 007c3c23] [007c3c27, 007c3ce8] [007c3cec, 007c3dad] [007c3db1, 007c3e72] [007c3e76, 007c3f38] [007c3f3c, 007c3f4b]]


void FUN_007c39a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a143;
  local_10 = ExceptionList;
  if (*(int *)(unaff_ESI + 0xa4) != 0) {
    ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0xa4));
  }
  ExceptionList = &local_10;
  *(undefined4 *)(unaff_ESI + 0xa4) = 0;
  *(undefined4 *)(unaff_ESI + 0xa8) = 0;
  *(undefined4 *)(unaff_ESI + 0xac) = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("popdistribution_start",0x15);
  local_8 = 0;
  local_14 = (**(code **)(*DAT_01258a80 + 0x48))(local_38);
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("popdistribution_offset",0x16);
  local_8 = 1;
  uVar2 = (**(code **)(*DAT_01258a80 + 0x48))(local_54);
  local_8 = 0xffffffff;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("WORKFORCE",9);
  local_8 = 2;
  local_18 = *(int **)(unaff_ESI + 0x54);
  uVar3 = (**(code **)(*local_18 + 0x3c))();
  (**(code **)(*local_18 + 0x34))(uVar3);
  local_1c = (int *)FUN_007c3650(local_70,0,*(undefined4 *)(unaff_ESI + 0x4c),local_14,uVar2,0);
  local_18 = *(int **)(unaff_ESI + 0xa8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = local_1c;
    puVar4[1] = local_18;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xac);
  *(undefined4 **)(unaff_ESI + 0xa8) = puVar4;
  *(int *)(unaff_ESI + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xa4) = puVar4;
  }
  else {
    *(undefined4 **)((int)local_18 + 8) = puVar4;
  }
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("RELIGION",8);
  local_8 = 3;
  local_1c = *(int **)(unaff_ESI + 0x54);
  uVar3 = (**(code **)(*local_1c + 0x3c))();
  (**(code **)(*local_1c + 0x34))(uVar3);
  local_1c = (int *)FUN_007c3650(local_70,1,*(undefined4 *)(unaff_ESI + 0x4c),local_14,uVar2,1);
  local_18 = *(int **)(unaff_ESI + 0xa8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = local_1c;
    puVar4[1] = local_18;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xac);
  *(undefined4 **)(unaff_ESI + 0xa8) = puVar4;
  *(int *)(unaff_ESI + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xa4) = puVar4;
  }
  else {
    *(undefined4 **)((int)local_18 + 8) = puVar4;
  }
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("IDEOLOGY",8);
  local_8 = 4;
  local_1c = *(int **)(unaff_ESI + 0x54);
  uVar3 = (**(code **)(*local_1c + 0x3c))();
  (**(code **)(*local_1c + 0x34))(uVar3);
  local_1c = (int *)FUN_007c3650(local_70,2,*(undefined4 *)(unaff_ESI + 0x4c),local_14,uVar2,2);
  local_18 = *(int **)(unaff_ESI + 0xa8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = local_1c;
    puVar4[1] = local_18;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xac);
  *(undefined4 **)(unaff_ESI + 0xa8) = puVar4;
  *(int *)(unaff_ESI + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xa4) = puVar4;
  }
  else {
    *(undefined4 **)((int)local_18 + 8) = puVar4;
  }
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("NATIONALITY",0xb);
  local_8 = 5;
  local_1c = *(int **)(unaff_ESI + 0x54);
  uVar3 = (**(code **)(*local_1c + 0x3c))();
  (**(code **)(*local_1c + 0x34))(uVar3);
  local_1c = (int *)FUN_007c3650(local_70,3,*(undefined4 *)(unaff_ESI + 0x4c),local_14,uVar2,3);
  local_18 = *(int **)(unaff_ESI + 0xa8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = local_1c;
    puVar4[1] = local_18;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xac);
  *(undefined4 **)(unaff_ESI + 0xa8) = puVar4;
  *(int *)(unaff_ESI + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xa4) = puVar4;
  }
  else {
    *(undefined4 **)((int)local_18 + 8) = puVar4;
  }
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  FUN_00409350("DOMINANT_ISSUES",0xf);
  local_8 = 6;
  local_1c = *(int **)(unaff_ESI + 0x54);
  uVar3 = (**(code **)(*local_1c + 0x3c))();
  (**(code **)(*local_1c + 0x34))(uVar3);
  local_1c = (int *)FUN_007c3650(local_70,4,*(undefined4 *)(unaff_ESI + 0x4c),local_14,uVar2,4);
  local_18 = *(int **)(unaff_ESI + 0xa8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = local_1c;
    puVar4[1] = local_18;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xac);
  *(undefined4 **)(unaff_ESI + 0xa8) = puVar4;
  *(int *)(unaff_ESI + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xa4) = puVar4;
  }
  else {
    *(undefined4 **)((int)local_18 + 8) = puVar4;
  }
  local_8 = 0xffffffff;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350("ELECTORATE",10);
  local_8 = 7;
  local_1c = *(int **)(unaff_ESI + 0x54);
  uVar3 = (**(code **)(*local_1c + 0x3c))();
  (**(code **)(*local_1c + 0x34))(uVar3);
  uVar2 = FUN_007c3650(local_8c,8,*(undefined4 *)(unaff_ESI + 0x4c),local_14,uVar2,5);
  local_18 = *(int **)(unaff_ESI + 0xa8);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar2;
    puVar4[1] = local_18;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar1 = *(int *)(unaff_ESI + 0xac);
  *(undefined4 **)(unaff_ESI + 0xa8) = puVar4;
  *(int *)(unaff_ESI + 0xac) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(unaff_ESI + 0xa4) = puVar4;
  }
  else {
    *(undefined4 **)((int)local_18 + 8) = puVar4;
  }
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  ExceptionList = local_10;
  return;
}

