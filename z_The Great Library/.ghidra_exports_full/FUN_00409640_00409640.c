// FUN_00409640 @ 00409640 body=[[00409640, 004096e8]]


void FUN_00409640(uint param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined **local_2c [4];
  char *local_1c [2];
  undefined1 *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3b330;
  pvStack_10 = ExceptionList;
  local_14 = &stack0xffffffc8;
  uVar5 = param_1 | 0xf;
  if (uVar5 != 0xffffffff) {
    uVar1 = *(uint *)(in_ECX + 0x14);
    uVar4 = uVar1 >> 1;
    param_1 = uVar5;
    if ((uVar5 / 3 < uVar4) && (param_1 = uVar4 + uVar1, -uVar4 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  local_8 = 0;
  ExceptionList = &pvStack_10;
  puVar2 = &stack0xffffffc8;
  if ((param_1 + 1 != 0) &&
     (ExceptionList = &pvStack_10, iVar3 = FUN_00aae9af(param_1 + 1), puVar2 = local_14, iVar3 == 0)
     ) {
    local_1c[0] = (char *)0x0;
    std::exception::exception((exception *)local_2c,local_1c);
    local_2c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_2c,&DAT_00e6fb20);
  }
  local_14 = puVar2;
  FUN_00409712();
  return;
}

