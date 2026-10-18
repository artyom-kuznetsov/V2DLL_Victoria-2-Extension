// FUN_009f2c30 @ 009f2c30 body=[[009f2c30, 009f2d04] [009f2d08, 009f2d6e]]


void FUN_009f2c30(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  int in_ECX;
  char local_12c [256];
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  cVar2 = *(char *)(in_ECX + 0x24);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar2 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_12c,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar2 = FUN_00416db0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (cVar2 == '\0') {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  for (iVar1 = *(int *)(in_ECX + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  ExceptionList = local_10;
  return;
}

