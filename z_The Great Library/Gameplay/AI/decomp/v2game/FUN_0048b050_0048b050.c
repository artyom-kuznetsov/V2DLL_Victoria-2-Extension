// FUN_0048b050 @ 0048b050 body=[[0048b050, 0048b16c] [0048b170, 0048b180]]


void FUN_0048b050(void)

{
  int in_ECX;
  undefined1 auStack_d0 [72];
  undefined4 uStack_88;
  undefined **local_6c;
  undefined4 local_68;
  undefined1 local_64 [64];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined ***local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d19e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0047dbb0();
  if (DAT_0131bb34 == 0) {
    local_14 = (undefined ***)FUN_00aae9af();
    local_8 = 0;
    if (local_14 != (undefined ***)0x0) {
      FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700();
  }
  if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 <
      (*(int *)(in_ECX + 0x828) - *(int *)(in_ECX + 0x824)) / 0x58) {
    local_14 = &local_6c;
    local_68 = 0x18d;
    local_6c = CGoodsPool::vftable;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_8 = 1;
    uStack_88 = 0x48b12a;
    _memset(local_64,0,0x40);
    FUN_00423920();
    local_14 = (undefined ***)auStack_d0;
    local_8 = 2;
    FUN_0047db00(auStack_d0,&local_6c);
    FUN_0048b6f0();
    if (local_24 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

