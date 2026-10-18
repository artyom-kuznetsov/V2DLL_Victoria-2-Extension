// FUN_007a5d60 @ 007a5d60 body=[[007a5d60, 007a5f22]]


void FUN_007a5d60(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7a753;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007a8070();
  if (((*(int *)(in_ECX + 0x3a0) != 0) && (*(int *)(in_ECX + 0x3a8) != 0)) &&
     (*(char *)(in_ECX + 0x3c4) == '\0')) {
    iVar1 = FUN_00aae9af();
    local_8 = 0;
    if (iVar1 != 0) {
      FUN_00401320();
      local_8._0_1_ = 1;
      FUN_00401320();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_009ffd70(iVar1);
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x3a0) + 0x38) + 0x18))();
  }
  if (*(int *)(in_ECX + 0x3a0) != 0) {
    FUN_009af9f0();
  }
  if (*(int *)(in_ECX + 0x3a0) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x100))();
    *(undefined4 *)(iVar1 + 0x130) = 0;
    if (*(undefined4 **)(in_ECX + 0x3a0) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x3a0))();
    }
    *(undefined4 *)(in_ECX + 0x3a0) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar2 = FUN_00475500();
  *(undefined1 *)(iVar2 + 0x165) = 0;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 0xc))();
  *(undefined4 *)(iVar1 + 0x75c) = 4;
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + 0x10) + 4))();
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x74c) + *(int *)(iVar1 + 0x75c) * 4) + 8))();
  if (*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) != 0) {
    (**(code **)(*(int *)(*(int *)(*(int *)(iVar1 + 0x1b4) + 0x20) + 0x18) + 0x38))();
  }
  if (*(undefined4 **)(in_ECX + 0x3ac) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x3ac))();
  }
  *(undefined4 *)(in_ECX + 0x3ac) = 0;
  if (*(undefined4 **)(in_ECX + 0x3b0) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x3b0))();
  }
  *(undefined4 *)(in_ECX + 0x3b0) = 0;
  if (*(undefined4 **)(in_ECX + 0x3d4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x3d4))();
  }
  *(undefined4 *)(in_ECX + 0x3d4) = 0;
  ExceptionList = local_10;
  return;
}

