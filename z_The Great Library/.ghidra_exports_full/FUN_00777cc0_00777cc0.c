// FUN_00777cc0 @ 00777cc0 body=[[00777cc0, 00777d3d] [00777d41, 00777d8d] [00777d91, 00777da0]]


void FUN_00777cc0(void)

{
  int iVar1;
  int in_ECX;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b456d0;
  local_10 = ExceptionList;
  if (*(char *)(in_ECX + 0x5bc) == '\0') {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("bookmarks",9);
    local_8 = 0;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))(local_2c);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("save_games",10);
    local_8 = 1;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))(local_48);
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

