// FUN_00b0de20 @ 00b0de20 body=[[00b0de20, 00b0defa]]


undefined4 * FUN_00b0de20(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b395df;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = (undefined4 *)
           (*(code *)PTR_FUN_00f01b08)
                     (0x30,0xcc,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffdc);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 4);
    FUN_00b13100(uVar1,0);
    *puVar2 = &PTR_FUN_00de0044;
    *(undefined2 *)(puVar2 + 6) = 1;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined2 *)(puVar2 + 10) = 1;
    uStack_4 = CONCAT31(uStack_4._1_3_,2);
    puVar2[0xb] = 2;
    FUN_00b0e160(uVar1,0);
    *(undefined2 *)(puVar2 + 6) = 0xcc;
    *(undefined2 *)(puVar2 + 10) = 0xcc;
  }
  uStack_4 = 0xffffffff;
  FUN_00b0e3d0(in_ECX + 0xc);
  ExceptionList = local_c;
  return puVar2;
}

