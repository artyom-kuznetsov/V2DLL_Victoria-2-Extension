// FUN_00763fe0 @ 00763fe0 body=[[00763fe0, 00764071] [00764075, 007640de] [007640e2, 00764131] [00764135, 00764180] [00764184, 007641cf] [007641d3, 0076421e] [00764222, 00764256]]


void FUN_00763fe0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6d450;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x368) + 0x18) + 0x34))();
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x370) + 0x18) + 0x38))();
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  FUN_00475500();
  cVar1 = FUN_00416db0();
  local_11 = cVar1 == '\0';
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  if ((bool)local_11) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("playername",10);
    local_8 = 1;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x40))(local_50);
    local_18 = (int *)(iVar2 + 0x54);
    iVar2 = FUN_00475500();
    (**(code **)(*local_18 + 0x40))(iVar2 + 0x108);
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("playername",10);
    local_8 = 2;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x40))(local_50);
    *(undefined4 *)(iVar2 + 0xf0) = 1;
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("playername",10);
    local_8 = 3;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x40))(local_50);
    *(undefined4 *)(iVar2 + 0xf4) = 0xf;
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("playername",10);
    local_8 = 4;
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x40))(local_50);
    FUN_009b6400(uVar3);
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350(&DAT_00e1460c,4);
    local_8 = 5;
    iVar2 = (**(code **)(**(int **)(in_ECX + 0x36c) + 0x40))(local_34);
    *(undefined2 *)(iVar2 + 0x4c) = 1;
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  iVar2 = (**(code **)(**(int **)(in_ECX + 4) + 0x100))();
  if (*(int *)(iVar2 + 0x130) != 0) {
    FUN_00765870(in_ECX);
  }
  ExceptionList = local_10;
  return;
}

