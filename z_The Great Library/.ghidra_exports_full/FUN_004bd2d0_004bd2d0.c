// FUN_004bd2d0 @ 004bd2d0 body=[[004bd2d0, 004bd31a] [004bd31e, 004bd3aa] [004bd3ae, 004bd3db] [004bd3df, 004bd3f3]]


/* WARNING: Removing unreachable block (ram,0x004bd361) */

undefined4 FUN_004bd2d0(int param_1,undefined4 param_2)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 local_30;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b40100;
  local_10 = ExceptionList;
  iVar6 = 0;
  uStack_7 = 0;
  iVar2 = *(int *)(param_1 + 0x378) - *(int *)(param_1 + 0x374) >> 2;
  ExceptionList = &local_10;
  ppvVar1 = &local_10;
  if (0 < iVar2) {
    do {
      local_8 = 0;
      iVar3 = FUN_004a8270(*(undefined4 *)(*(int *)(param_1 + 0x374) + iVar6 * 4));
      uVar4 = *(uint *)(iVar3 + 0x10);
      uVar5 = uVar4;
      if (in_stack_00000018 <= uVar4) {
        uVar5 = in_stack_00000018;
      }
      iVar3 = FUN_00414bd0(uVar5);
      bVar7 = false;
      if (iVar3 == 0) {
        if (uVar4 < in_stack_00000018) {
          uVar4 = 0xffffffff;
        }
        else {
          uVar4 = (uint)(uVar4 != in_stack_00000018);
        }
        bVar7 = uVar4 == 0;
      }
      local_8 = 0;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      if (bVar7) {
        if (in_stack_0000001c < 0x10) {
          ExceptionList = local_10;
          return *(undefined4 *)(*(int *)(param_1 + 0x374) + iVar6 * 4);
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_2);
      }
      iVar6 = iVar6 + 1;
      ppvVar1 = ExceptionList;
    } while (iVar6 < iVar2);
  }
  ExceptionList = ppvVar1;
  local_8 = 0;
  if (in_stack_0000001c < 0x10) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_2);
}

