// FUN_00987ac0 @ 00987ac0 body=[[00987ac0, 00987b6e] [00987b72, 00987b91] [00987b95, 00987ba1] [00987ba5, 00987c05]]


void FUN_00987ac0(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 local_48;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a541;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)(*(int *)(*(int *)(param_1 + -0x78) + 4) + -0x78 + param_1) = &PTR_FUN_00e3785c;
  local_8 = 1;
  pcVar3 = (char *)FUN_00988010();
  local_8._0_1_ = 2;
  if (0xf < *(uint *)(pcVar3 + 0x14)) {
    pcVar3 = *(char **)pcVar3;
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  pcVar4 = pcVar3;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  FUN_00409350(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  local_8 = CONCAT31(local_8._1_3_,3);
  puVar1 = (undefined4 *)(param_1 + -0x24);
  (**(code **)(**(int **)(param_1 + -0x28) + 4))
            (*(undefined4 *)(param_1 + -4),puVar1,*(undefined4 *)(param_1 + -8),local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  if (*(uint *)(param_1 + -0x10) < 0x10) {
    *(undefined4 *)(param_1 + -0x10) = 0xf;
    *(undefined4 *)(param_1 + -0x14) = 0;
    *(undefined1 *)puVar1 = 0;
    *(undefined ***)(*(int *)(*(int *)(param_1 + -0x78) + 4) + -0x50 + param_1 + -0x28) =
         &PTR_FUN_00e37850;
    local_8 = 4;
    *(undefined ***)(param_1 + -0x74) =
         std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_009d68b0();
    FUN_00547420();
    *(undefined ***)(*(int *)(*(int *)(param_1 + -0x78) + 4) + -0x50 + param_1 + -0x28) =
         std::basic_ostream<char,std::char_traits<char>_>::vftable;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar1);
}

