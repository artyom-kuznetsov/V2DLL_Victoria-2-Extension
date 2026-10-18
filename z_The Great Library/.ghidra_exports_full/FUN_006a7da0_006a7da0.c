// FUN_006a7da0 @ 006a7da0 body=[[006a7da0, 006a7e67]]


void FUN_006a7da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)(in_ECX + 0xc) = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(in_ECX + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(in_ECX + 0xe) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(in_ECX + 0xf) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(in_ECX + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)(in_ECX + 0x12) = *(undefined1 *)(param_1 + 0x12);
  *(undefined1 *)(in_ECX + 0x11) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined1 *)(in_ECX + 0x34) = *(undefined1 *)(param_1 + 0x34);
  if (*(undefined4 **)(in_ECX + 0x38) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x38))(1);
    *(undefined4 *)(in_ECX + 0x38) = 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    iVar1 = FUN_00aae9af(0x3c);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006a73c0(param_1 + 0x14);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
    FUN_006a7da0(*(undefined4 *)(param_1 + 0x38));
  }
  ExceptionList = local_10;
  return;
}

