// FUN_00aa9520 @ 00aa9520 body=[[00aa9520, 00aa95e0]]


undefined4 * FUN_00aa9520(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined **local_28 [3];
  undefined4 *local_1c;
  char *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36653;
  local_10 = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  puVar2 = (undefined4 *)FUN_00aae9af(0x20,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
    local_14 = in_ECX;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    local_8 = 1;
    puVar2[6] = 0;
    local_1c = puVar2;
    iVar3 = FUN_00aae9af(0x28,uVar1);
    if (iVar3 == 0) {
      local_18 = (char *)0x0;
      std::exception::exception((exception *)local_28,&local_18);
      local_28[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_28,&DAT_00e6fb20);
    }
    puVar2[5] = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined4 *)(puVar2[5] + 4) = puVar2[5];
    *(undefined4 *)(puVar2[5] + 8) = puVar2[5];
    *(undefined1 *)(puVar2[5] + 0x24) = 1;
    *(undefined1 *)(puVar2[5] + 0x25) = 1;
  }
  *local_14 = puVar2;
  ExceptionList = local_10;
  return local_14;
}

