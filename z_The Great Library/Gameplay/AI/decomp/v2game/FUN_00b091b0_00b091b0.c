// FUN_00b091b0 @ 00b091b0 body=[[00b091b0, 00b09243]]


undefined4 FUN_00b091b0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b3907b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (*(code *)PTR_FUN_00f01b08)
                    (0xb8,300,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b08440(param_1,*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(param_2 + 0x30));
  }
  uStack_4 = 0xffffffff;
  FUN_00b08280(param_2);
  ExceptionList = local_c;
  return uVar2;
}

