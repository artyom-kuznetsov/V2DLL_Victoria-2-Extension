// FUN_009d7fa0 @ 009d7fa0 body=[[009d7fa0, 009d8088] [009d808c, 009d809b]]


/* WARNING: Removing unreachable block (ram,0x009d8045) */
/* WARNING: Removing unreachable block (ram,0x009d804b) */

void FUN_009d7fa0(void)

{
  int *unaff_ESI;
  undefined1 local_54 [36];
  uint uStack_30;
  int iStack_28;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5daf0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(local_54,unaff_ESI + 0x30,1);
  local_c = 1;
  (**(code **)(*unaff_ESI + 8))();
  puStack_10 = (undefined1 *)((uint)puStack_10 & 0xffffff00);
  if (iStack_28 != 0) {
    PHYSFS_close();
    iStack_28 = 0;
  }
  if (uStack_30 < 0x10) {
    ExceptionList = pvStack_18;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

