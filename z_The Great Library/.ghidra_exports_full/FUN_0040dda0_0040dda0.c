// FUN_0040dda0 @ 0040dda0 body=[[0040dda0, 0040de5d] [0040de61, 0040de91]]


void FUN_0040dda0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x390);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
     (*(int *)(iVar1 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
    ExceptionList = &local_10;
    *(int *)(in_ECX + 0x394) = iVar1;
    *(undefined1 *)(in_ECX + 0x39c) = 1;
    *(undefined4 *)(in_ECX + 0x34c) = 2;
    FUN_0040d870();
    FUN_0040f040(in_ECX);
    FUN_0040f740();
    FUN_0040f4d0();
    uVar2 = FUN_00405af0(*(undefined4 *)(in_ECX + 0x394));
    local_8 = 0;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x78) + 0x54) + 0x40))(uVar2);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    FUN_009b6400(*(undefined4 *)(in_ECX + 0x78));
    *(undefined2 *)(*(int *)(in_ECX + 0x78) + 0x4c) = 1;
  }
  ExceptionList = local_10;
  return;
}

