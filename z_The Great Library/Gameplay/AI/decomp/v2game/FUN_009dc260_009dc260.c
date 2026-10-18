// FUN_009dc260 @ 009dc260 body=[[009dc260, 009dc31f] [009dc323, 009dc349] [009dc34d, 009dc367] [009dc36b, 009dc37a]]


void FUN_009dc260(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  LPCSTR **lpPathName;
  int iVar3;
  undefined4 local_6c;
  uint local_58;
  LPCSTR *local_50 [5];
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4eef8;
  local_10 = ExceptionList;
  iVar3 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00408ed0(param_1,0,0xffffffff);
  local_8 = 0;
  local_14[0] = 0x2f;
  do {
    iVar1 = FUN_005484e0(local_34,local_14,1);
    if (iVar1 == -1) {
      local_18[0] = 0x5c;
      iVar1 = FUN_005484e0(local_34,local_18,1);
    }
    if (0 < iVar1) {
      FUN_009895f0(iVar3 + iVar1);
      local_8._0_1_ = 1;
      uVar2 = FUN_009895f0(local_24);
      local_8._0_1_ = 2;
      FUN_00408ed0(uVar2,0,0xffffffff);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      lpPathName = (LPCSTR **)local_50[0];
      if (local_3c < 0x10) {
        lpPathName = local_50;
      }
      CreateDirectoryA((LPCSTR)lpPathName,(LPSECURITY_ATTRIBUTES)0x0);
      iVar3 = iVar3 + iVar1 + 1;
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
    }
    if (iVar1 == -1) {
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      ExceptionList = local_10;
      return;
    }
  } while( true );
}

