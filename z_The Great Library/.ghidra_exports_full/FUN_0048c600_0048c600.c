// FUN_0048c600 @ 0048c600 body=[[0048c600, 0048c700] [0048c704, 0048c711] [0048c737, 0048c747]]


void FUN_0048c600(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined **local_78;
  undefined4 local_74;
  undefined1 local_70 [64];
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int local_20;
  int local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b46901;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff78;
  local_1c = param_1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  do {
    if (param_2 == 0) {
      ExceptionList = local_10;
      return;
    }
    local_74 = 0x18d;
    local_78 = CGoodsPool::vftable;
    local_30 = (undefined4 *)0x0;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)0x0;
    _local_8 = CONCAT31(uStack_7,1);
    _memset(local_70,0,0x40);
    if ((local_2c < (undefined4 *)((int)&DAT_0125e448 + 1)) || (&DAT_0125e448 < local_30)) {
      if (local_2c == local_28) {
        FUN_00423780();
      }
      if (local_2c != (undefined4 *)0x0) {
        *local_2c = DAT_0125e448;
        uVar1 = DAT_0125e44c;
        goto LAB_0048c6d3;
      }
    }
    else {
      iVar2 = (int)&DAT_0125e448 - (int)local_30 >> 3;
      if (local_2c == local_28) {
        FUN_00423780();
      }
      if (local_2c != (undefined4 *)0x0) {
        *local_2c = local_30[iVar2 * 2];
        uVar1 = local_30[iVar2 * 2 + 1];
LAB_0048c6d3:
        local_2c[1] = uVar1;
      }
    }
    local_2c = local_2c + 2;
    local_8 = 3;
    local_20 = param_1;
    if (param_1 != 0) {
      FUN_0047db00(param_1,&local_78);
    }
    local_8 = 0;
    if (local_30 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30);
    }
    param_2 = param_2 + -1;
    param_1 = param_1 + 0x58;
  } while( true );
}

