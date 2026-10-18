// FUN_009e7f90 @ 009e7f90 body=[[009e7f90, 009e808e]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009e7f90(void)

{
  float10 fVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a72e;
  local_10 = ExceptionList;
  if (DAT_00f07da5 != '\0') {
    ExceptionList = &local_10;
    if ((DAT_013f1a78 & 1) == 0) {
      DAT_013f1a78 = DAT_013f1a78 | 1;
      local_8 = 0;
      ExceptionList = &local_10;
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        ExceptionList = &local_10;
        DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
        if (DAT_00f20c18 == (undefined4 *)0x0) {
          DAT_00f20c18 = (undefined4 *)0x0;
        }
        else {
          *DAT_00f20c18 = &PTR_FUN_00e38b28;
        }
      }
      fVar1 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
      _DAT_013f1a74 = (float)fVar1;
    }
    local_8 = 0xffffffff;
    if (DAT_00f20c18 == (undefined4 *)0x0) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar1 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    FUN_00ad3b20((float)fVar1 - _DAT_013f1a74);
    _DAT_013f1a74 = (float)fVar1;
  }
  ExceptionList = local_10;
  return;
}

