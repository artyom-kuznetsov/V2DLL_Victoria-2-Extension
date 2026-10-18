// FUN_00aad1d0 @ 00aad1d0 body=[[00aad1d0, 00aad295]]


void FUN_00aad1d0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined **local_24 [4];
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b36a88;
  local_10 = ExceptionList;
  uVar1 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 8) = 0;
  iVar2 = FUN_00aae9af(0x18,uVar1);
  if (iVar2 != 0) {
    *(int *)(in_ECX + 4) = iVar2;
    *(int *)iVar2 = iVar2;
    *(int *)(*(int *)(in_ECX + 4) + 4) = *(int *)(in_ECX + 4);
    *(int *)(*(int *)(in_ECX + 4) + 8) = *(int *)(in_ECX + 4);
    *(undefined1 *)(*(int *)(in_ECX + 4) + 0x14) = 1;
    *(undefined1 *)(*(int *)(in_ECX + 4) + 0x15) = 1;
    local_8 = 0;
    uVar3 = FUN_00aac9f0(param_1);
    *(undefined4 *)(in_ECX + 0x14) = uVar3;
    uVar3 = FUN_00aacac0(param_1);
    *(undefined4 *)(in_ECX + 0x18) = uVar3;
    FUN_00aa9aa0(param_1);
    uVar3 = luaL_ref(param_1,0xffffd8f0);
    *(undefined4 *)(in_ECX + 0x10) = uVar3;
    ExceptionList = local_10;
    return;
  }
  local_14 = (char *)0x0;
  std::exception::exception((exception *)local_24,&local_14);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

