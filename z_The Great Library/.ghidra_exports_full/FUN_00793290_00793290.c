// FUN_00793290 @ 00793290 body=[[00793290, 00793317] [0079331b, 00793508]]


void FUN_00793290(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_ESI;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbb72a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (DAT_012589b0 != 0) {
    ExceptionList = &local_10;
    FUN_005c68c0(*(undefined4 *)(unaff_ESI + 8));
  }
  iVar1 = DAT_012588e8;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  uVar5 = *(undefined4 *)(iVar1 + 0xb24);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_14 = uVar5;
  FUN_00409350(&DAT_00dfad80,4);
  local_8 = 0;
  piVar3 = (int *)(**(code **)(**(int **)(unaff_ESI + 4) + 0x7c))(local_34);
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  (**(code **)(*piVar3 + 0x5c))();
  FUN_00679c50();
  local_18 = FUN_00aae9af(800);
  local_8 = 1;
  if (local_18 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00798a50(local_18,*(undefined4 *)(unaff_ESI + 8),1,0);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 0x10))(uVar4,0);
  local_18 = FUN_00aae9af(0x2c);
  local_8 = 2;
  if (local_18 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0078c450(local_18,*(undefined4 *)(unaff_ESI + 8));
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 0x10))(uVar4,0);
  local_18 = FUN_00aae9af(0x268);
  local_8 = 3;
  if (local_18 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0078dee0(local_18,uVar5,*(undefined4 *)(unaff_ESI + 8));
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 0x10))(uVar5,0);
  local_18 = FUN_00aae9af(0x98);
  local_8 = 4;
  if (local_18 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0078ac40(local_18,*(undefined4 *)(unaff_ESI + 8));
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar3 + 0x10))(uVar5,0);
  iVar1 = *(int *)(*(int *)(unaff_ESI + 8) + 0x74);
  if (iVar1 != 0) {
    cVar2 = FUN_0059c160(iVar1);
    if (cVar2 != '\0') {
      local_18 = FUN_00aae9af(0x80);
      local_8 = 5;
      if (local_18 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0078ba40(local_18,*(undefined4 *)(unaff_ESI + 8),iVar1);
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar3 + 0x10))(uVar5,0);
      *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + 1;
    }
  }
  if (*(int *)(*(int *)(unaff_ESI + 8) + 0x70) != 0) {
    cVar2 = FUN_0059c160(*(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x70));
    if (cVar2 != '\0') {
      local_18 = FUN_00aae9af(0x80);
      local_8 = 6;
      if (local_18 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0078bf70(local_18,*(int *)(unaff_ESI + 8),
                             *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x70));
      }
      local_8 = 0xffffffff;
      (**(code **)(*piVar3 + 0x10))(uVar5,0);
      *(int *)(unaff_ESI + 0xc) = *(int *)(unaff_ESI + 0xc) + 100;
    }
  }
  (**(code **)(*piVar3 + 0x6c))();
  (**(code **)(*piVar3 + 0x6c))();
  ExceptionList = local_10;
  return;
}

