// FUN_00b075f0 @ 00b075f0 body=[[00b075f0, 00b07684]]


undefined4 FUN_00b075f0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b38f0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = 0;
  iVar1 = (*(code *)PTR_FUN_00f01b08)
                    (0x28,0xca,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00b07530(param_1,*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
                         *(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c),
                         *(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 4));
  }
  uStack_4 = 0xffffffff;
  FUN_00ae66b0(in_ECX);
  ExceptionList = local_c;
  return uVar2;
}

