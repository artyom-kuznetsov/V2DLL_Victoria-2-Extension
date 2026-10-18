// FUN_005d1890 @ 005d1890  (requested 005D1890, first bytes: 55 8B EC 83 E4 F8 64 A1)


void FUN_005d1890(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int local_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  pvStack_14 = ExceptionList;
  iVar1 = DAT_01259abc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b8df88;
  ExceptionList = &pvStack_14;
  iVar3 = in_ECX[0x13];
  in_ECX[0x2a] = DAT_01259abc;
  in_ECX[0x2b] = iVar1;
  while (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 8);
    FUN_005d1890();
  }
  FUN_00401000(0x3f000000);
  iVar3 = FUN_00b31c00();
  in_ECX[0x3e] = iVar3;
  in_ECX[0x40] = 0;
  if (in_ECX[0x39] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x39]);
  }
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  FUN_005d57a0(in_ECX);
  if ((in_ECX[0x42] != 0) && (in_ECX[0x1d] == 0)) {
    if (in_ECX[0x43] != 0) {
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350(&DAT_00e02bd4,4);
      local_c = 0;
      (**(code **)(*(int *)in_ECX[0x43] + 0x124))(local_34,0);
      local_c = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
    }
    cVar2 = (**(code **)(*in_ECX + 0x3c))();
    if ((cVar2 == '\0') || (*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) == '\0')) {
      local_48 = 0;
      cVar2 = (**(code **)(*in_ECX + 0x40))();
      if (cVar2 != '\0') {
        local_48 = 4;
      }
      if (in_ECX[0x43] != 0) {
        FUN_007e8c90(*(undefined4 *)(in_ECX[0x37] + 0x58));
        uStack_40 = *(undefined8 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x100 + local_48 * 0xc);
        uStack_38 = *(undefined4 *)(*(int *)(in_ECX[0x37] + 0x5c) + local_48 * 0xc + 0x108);
        (**(code **)(*(int *)in_ECX[0x43] + 0x168))(&uStack_40);
      }
      if (((char)in_ECX[1] != '\0') && ((int *)in_ECX[0x44] != (int *)0x0)) {
        uStack_40 = *(undefined8 *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x100 + local_48 * 0xc);
        uStack_38 = *(undefined4 *)(*(int *)(in_ECX[0x37] + 0x5c) + local_48 * 0xc + 0x108);
        (**(code **)(*(int *)in_ECX[0x44] + 0x168))(&uStack_40);
      }
    }
    cVar2 = (**(code **)(*in_ECX + 0x3c))();
    if (cVar2 == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = 0x3f490fdb;
    }
    in_ECX[0x2d] = iVar3;
    in_ECX[0x2e] = iVar3;
    if ((int *)in_ECX[0x43] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x43] + 0x94))(iVar3);
    }
    FUN_004c8580(*(undefined4 *)(in_ECX[0x37] + 0x5c),in_ECX);
  }
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX[0x37] + 0x134) * 4);
  if ((in_ECX[0x31] != *(int *)(iVar3 + 0x20)) &&
     ((((*(int *)(*(int *)(*(int *)(iVar3 + 0xbe8) + in_ECX[0x31] * 4) + 0x34) != 0 ||
        ((((char)in_ECX[0x30] == 'R' && (*(char *)((int)in_ECX + 0xc1) == 'E')) &&
         (*(char *)((int)in_ECX + 0xc2) == 'B')))) ||
       (((*(char *)(iVar3 + 0x1c) == 'R' && (*(char *)(iVar3 + 0x1d) == 'E')) &&
        (*(char *)(iVar3 + 0x1e) == 'B')))) &&
      (((in_ECX[0x3b] < 1 && ((char)in_ECX[0x41] == '\0')) &&
       ((in_ECX[0x1c] == 0 && (in_ECX[0x1d] == 0)))))))) {
    FUN_005b57a0(DAT_012588e8 + 0xab4);
  }
  ExceptionList = pvStack_14;
  return;
}

