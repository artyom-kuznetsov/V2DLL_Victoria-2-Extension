// FUN_0040dea0 @ 0040dea0 body=[[0040dea0, 0040df21] [0040df25, 0040df5e]]


void FUN_0040dea0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_34;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x390);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
     (*(int *)(iVar1 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
    ExceptionList = &local_14;
    *(undefined1 *)(in_ECX + 0x39d) = 1;
    uVar2 = FUN_00405af0(iVar1);
    local_c = 0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x78) + 0x54) + 0x40))(uVar2);
    local_c = 0xffffffff;
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34);
    }
    FUN_009b6400(*(undefined4 *)(in_ECX + 0x78));
    *(undefined2 *)(*(int *)(in_ECX + 0x78) + 0x4c) = 1;
    FUN_0040f040(in_ECX);
  }
  ExceptionList = local_14;
  return;
}

