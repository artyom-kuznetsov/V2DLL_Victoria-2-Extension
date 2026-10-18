// FUN_005c6740 @ 005c6740 body=[[005c6740, 005c67c9] [005c67cd, 005c68be]]


void FUN_005c6740(void)

{
  char cVar1;
  int *unaff_ESI;
  int iVar2;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b44d98;
  local_10 = ExceptionList;
  if ((char)unaff_ESI[0x67] != '\x01') {
    ExceptionList = &local_10;
    FUN_005cb2c0(unaff_ESI[0x37]);
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350(&DAT_00e02bd4,4);
    local_8 = 0;
    (**(code **)(*(int *)unaff_ESI[0x43] + 0x124))(local_44,0);
    local_8 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_44[0]);
    }
    (**(code **)(*(int *)unaff_ESI[0x43] + 0x34))();
    local_1c = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x100);
    local_14 = *(undefined4 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x108);
    (**(code **)(*(int *)unaff_ESI[0x43] + 0x168))(&local_1c);
    if ((char)unaff_ESI[1] != '\0') {
      local_28 = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x100);
      local_20 = *(undefined4 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x108);
      (**(code **)(*(int *)unaff_ESI[0x44] + 0x168))(&local_28);
    }
    FUN_004c8580(*(undefined4 *)(unaff_ESI[0x37] + 0x5c),unaff_ESI);
    cVar1 = (**(code **)(*unaff_ESI + 0x3c))();
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = 0x3f490fdb;
    }
    unaff_ESI[0x2d] = iVar2;
    unaff_ESI[0x2e] = iVar2;
    if ((int *)unaff_ESI[0x43] != (int *)0x0) {
      (**(code **)(*(int *)unaff_ESI[0x43] + 0x94))(iVar2);
    }
    (**(code **)(*(int *)unaff_ESI[0x43] + 0xb0))();
    *(undefined1 *)(unaff_ESI + 0x67) = 1;
  }
  ExceptionList = local_10;
  return;
}

