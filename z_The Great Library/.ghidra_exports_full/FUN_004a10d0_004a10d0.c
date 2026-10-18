// FUN_004a10d0 @ 004a10d0 body=[[004a10d0, 004a11cc]]


bool FUN_004a10d0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 local_7c [16];
  undefined4 local_6c;
  int *local_68;
  char *pcStack_64;
  undefined1 local_58 [48];
  int local_28;
  char local_20;
  undefined1 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5b298;
  local_10 = ExceptionList;
  if (DAT_00f0af08 < 0x10) {
    pcStack_64 = (char *)&DAT_00f0aef4;
  }
  else {
    pcStack_64 = DAT_00f0aef4;
    if (DAT_00f0aef4 == (char *)0x0) {
      return true;
    }
  }
  if (*pcStack_64 != '\0') {
    local_68 = (int *)0x4a110a;
    ExceptionList = &local_10;
    iVar1 = PHYSFS_exists();
    if (iVar1 != 0) {
      local_18 = local_7c;
      local_68 = (int *)0xf;
      local_6c = 0;
      local_7c[0] = 0;
      FUN_00409350(&DAT_00ded94d,0);
      FUN_00992740(local_58,&DAT_00f0aef4,0);
      local_8 = 0;
      if (local_20 != '\0') {
        pcStack_64 = (char *)0x4a11ba;
        FUN_00992d60();
        ExceptionList = local_10;
        return false;
      }
      local_14 = 0;
      if (local_28 != 0) {
        pcStack_64 = (char *)local_28;
        local_68 = (int *)0x4a1173;
        uVar3 = PHYSFS_fileLength();
        local_18 = (undefined1 *)((ulonglong)uVar3 >> 0x20);
        pcStack_64 = (char *)uVar3;
        if (pcStack_64 == (char *)0x4) {
          local_68 = &local_14;
          local_6c = 0x4a118b;
          FUN_00992f20();
        }
      }
      bVar2 = local_14 != *(int *)(param_1 + 0x2c);
      pcStack_64 = (char *)0x4a119f;
      FUN_00992d60();
      ExceptionList = local_10;
      return bVar2;
    }
  }
  ExceptionList = local_10;
  return true;
}

