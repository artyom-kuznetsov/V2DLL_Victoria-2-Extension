// FUN_00a58640 @ 00a58640 body=[[00a58640, 00a58832] [00a58836, 00a588cc]]


void FUN_00a58640(undefined4 param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  undefined1 local_64 [20];
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b77c5a;
  local_14 = ExceptionList;
  if (param_2 < 0x84) {
    if (param_2 == 0x83) {
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    }
    switch(param_2) {
    case 0x1d:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x94,0);
      ExceptionList = local_14;
      return;
    case 0x24:
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0x78,0);
      ExceptionList = local_14;
      return;
    case 0x2e:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    case 0x4b:
      ExceptionList = &local_14;
      FUN_009a1e10();
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (param_2 == 0x8c) {
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xb0,0);
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_c = 0;
      cVar2 = FUN_00416db0();
      local_c = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (cVar2 == '\0') {
        FUN_009a8ee0(local_64,in_ECX + 0xb0);
        local_c = 1;
        iVar1 = *(int *)(*(int *)(in_ECX + 100) + 0xa8);
        FUN_009a9880(*(undefined8 *)(iVar1 + 8),*(undefined8 *)(iVar1 + 0x10));
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_00408ed0();
        FUN_00408ad0();
        local_c = 0xffffffff;
        FUN_009a9740();
      }
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0xbf) {
      ExceptionList = &local_14;
      FUN_009a1750(in_ECX + 0xec,0);
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x1b7) {
      ExceptionList = &local_14;
      FUN_009a1e10();
      *(undefined4 *)(in_ECX + 0x70) = 0;
      *(undefined4 *)(in_ECX + 0x74) = 0;
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = &local_14;
  FUN_009ecfa0(param_1,param_2);
  ExceptionList = local_14;
  return;
}

