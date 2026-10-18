// FUN_00a38710 @ 00a38710 body=[[00a38710, 00a387a2]]


void FUN_00a38710(void)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48aeb;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  (**(code **)(**(int **)(in_ECX + 0x14) + 0xc))();
  ppuVar1 = (undefined **)FUN_00a5f860();
  if (ppuVar1 == &PTR_PTR_00f0ff2c) {
    local_8 = 0;
    puVar2 = (undefined4 *)FUN_00aae9af(4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      local_8 = CONCAT31(local_8._1_3_,2);
      *puVar2 = &PTR_FUN_00e43790;
      FUN_00a793e0();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    if ((puVar2 != DAT_013f05b4) && (DAT_013f05b4 != (undefined4 *)0x0)) {
      (**(code **)*DAT_013f05b4)(1);
    }
    local_8 = 0xffffffff;
    DAT_013f05b4 = puVar2;
    FUN_00a387c0();
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x14) + 0x10))();
  FUN_00a5f860();
  ExceptionList = pvStack_10;
  return;
}

