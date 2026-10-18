// FUN_00a71f00 @ 00a71f00 body=[[00a71f00, 00a71f6d] [00a71f71, 00a71f7e] [00a71f82, 00a71f93]]


/* WARNING: Removing unreachable block (ram,0x00a71f65) */

void FUN_00a71f00(void)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d800;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = FUN_00a17000(in_ECX);
  local_8 = 0;
  FUN_00408ed0(uVar1,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00a72850();
  if (local_1c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30);
}

