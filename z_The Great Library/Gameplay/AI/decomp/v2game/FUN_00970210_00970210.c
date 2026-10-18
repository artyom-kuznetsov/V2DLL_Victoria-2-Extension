// FUN_00970210 @ 00970210 body=[[00970210, 00970284] [00970288, 00970290] [009702b5, 009702c5]]


void FUN_00970210(undefined1 *param_1)

{
  int in_ECX;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3e6d9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffbc;
  local_18 = param_1;
  uStack_7 = 0;
  ExceptionList = &local_10;
  while( true ) {
    if (in_ECX == 0) {
      ExceptionList = local_10;
      return;
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8 = 2;
    local_1c = param_1;
    if (param_1 != (undefined1 *)0x0) {
      *(undefined4 *)(param_1 + 0x14) = 0xf;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *param_1 = 0;
      FUN_00408ed0(local_38,0,0xffffffff);
    }
    local_8 = 0;
    if (0xf < local_24) break;
    in_ECX = in_ECX + -1;
    param_1 = param_1 + 0x1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

