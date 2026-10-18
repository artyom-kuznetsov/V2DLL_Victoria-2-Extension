// FUN_005d1360 @ 005d1360  (requested 005D1360, first bytes: 55 8B EC 64 A1 00 00 00)


void FUN_005d1360(void)

{
  int *piVar1;
  char cVar2;
  int *unaff_ESI;
  int iVar3;
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
  if (unaff_ESI[0x42] != 0) {
    ExceptionList = &local_10;
    if (unaff_ESI[0x43] != 0) {
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = local_44[0] & 0xffffff00;
      ExceptionList = &local_10;
      FUN_00409350(&DAT_00e02bd4,4);
      local_8 = 0;
      (**(code **)(*(int *)unaff_ESI[0x43] + 0x124))(local_44,0);
      local_8 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_44[0]);
      }
    }
    local_8 = 0xffffffff;
    cVar2 = (**(code **)(*unaff_ESI + 0x3c))();
    if (cVar2 == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = 0x3f490fdb;
    }
    unaff_ESI[0x2d] = iVar3;
    unaff_ESI[0x2e] = iVar3;
    if ((int *)unaff_ESI[0x43] != (int *)0x0) {
      (**(code **)(*(int *)unaff_ESI[0x43] + 0x94))(iVar3);
    }
    if ((unaff_ESI[0x3b] < 1) && ((char)unaff_ESI[0x41] == '\0')) {
      cVar2 = (**(code **)(*unaff_ESI + 0x40))();
      piVar1 = (int *)unaff_ESI[0x43];
      if (cVar2 == '\0') {
        if (piVar1 != (int *)0x0) {
          local_1c = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x100);
          local_14 = *(undefined4 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x108);
          (**(code **)(*piVar1 + 0x168))(&local_1c);
        }
        if (((char)unaff_ESI[1] != '\0') && ((int *)unaff_ESI[0x44] != (int *)0x0)) {
          local_28 = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x100);
          local_20 = *(undefined4 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x108);
          (**(code **)(*(int *)unaff_ESI[0x44] + 0x168))(&local_28);
        }
      }
      else {
        if (piVar1 != (int *)0x0) {
          local_1c = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x130);
          local_14 = *(undefined4 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x138);
          (**(code **)(*piVar1 + 0x168))(&local_1c);
        }
        if (((char)unaff_ESI[1] != '\0') && ((int *)unaff_ESI[0x44] != (int *)0x0)) {
          local_1c = *(undefined8 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x130);
          local_14 = *(undefined4 *)(*(int *)(unaff_ESI[0x37] + 0x5c) + 0x138);
          (**(code **)(*(int *)unaff_ESI[0x44] + 0x168))(&local_1c);
        }
      }
    }
    else {
      FUN_005d1fc0();
    }
    FUN_004c8580(*(undefined4 *)(unaff_ESI[0x37] + 0x5c),unaff_ESI);
  }
  ExceptionList = local_10;
  return;
}

