// FUN_0043ee20 @ 0043ee20 body=[[0043ee20, 0043eeab] [0043eeaf, 0043ef11] [0043ef15, 0043ef5f]]


undefined4 FUN_0043ee20(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
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
  puStack_c = &LAB_00b44610;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x50))();
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  pcVar2 = *(char **)(in_ECX + 4);
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_8 = 0;
  uVar4 = (**(code **)(*DAT_01258a80 + 0x2c))(local_48,*(undefined4 *)(in_ECX + 8));
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x10) = uVar4;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  if (*(int *)(in_ECX + 0x10) == 0) {
    ExceptionList = local_10;
    return 0;
  }
  pcVar2 = *(char **)(in_ECX + 4);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  local_8 = 1;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x10) + 0x18) + 0x78))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(*(int *)(*(int *)(in_ECX + 0x10) + 0x18) + 0x34))();
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))();
  ExceptionList = local_10;
  return 1;
}

