// FUN_00b13350 @ 00b13350 body=[[00b13350, 00b134c6]]


undefined4 FUN_00b13350(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00b39ba2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = (*(code *)PTR_FUN_00f01b08)
                    (0x90,0x11,4,0,0,0xffffffff,DAT_00ef259c ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b19980();
  }
  uStack_4 = 0xffffffff;
  *in_ECX = uVar2;
  iVar1 = (*(code *)PTR_FUN_00f01b08)(0x14,10,4,0,0,0xffffffff);
  uStack_4 = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b15fa0();
  }
  uStack_4 = 0xffffffff;
  in_ECX[1] = uVar2;
  iVar1 = (*(code *)PTR_FUN_00f01b08)(4,0x17,4,0,0,0xffffffff);
  uStack_4 = 2;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b16490();
  }
  uStack_4 = 0xffffffff;
  in_ECX[3] = uVar2;
  iVar1 = (*(code *)PTR_FUN_00f01b08)(0x10,0x17,4,0,0,0xffffffff);
  uStack_4 = 3;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b158a0();
  }
  uStack_4 = 0xffffffff;
  in_ECX[4] = uVar2;
  iVar1 = (*(code *)PTR_FUN_00f01b08)(0x14,0x16,4,0,0,0xffffffff);
  uStack_4 = 4;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b1e710();
  }
  uStack_4 = 0xffffffff;
  in_ECX[5] = uVar2;
  iVar1 = FUN_00aae9af(0x1d8);
  uStack_4 = 5;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00b1de80();
  }
  in_ECX[2] = uVar2;
  ExceptionList = local_c;
  return 1;
}

