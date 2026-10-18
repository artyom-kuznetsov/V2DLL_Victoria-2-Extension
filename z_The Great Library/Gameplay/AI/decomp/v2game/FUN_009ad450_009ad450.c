// FUN_009ad450 @ 009ad450 body=[[009ad450, 009ad4af] [009ad4b3, 009ad4db] [009ad4df, 009ad506]]


void FUN_009ad450(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41c58;
  local_10 = ExceptionList;
  local_8 = 3;
  ExceptionList = &local_10;
  FUN_009adbf0(param_1 + 0x48);
  FUN_0057afc0(param_1 + 0x48);
  FUN_00aaea59(*(undefined4 *)(param_1 + 0x50));
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_00463b30(*(undefined4 *)(param_1 + 0x3c),param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_009adbb0();
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  *(int *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_8 = 0xffffffff;
  FUN_009aa1c0(param_1);
  ExceptionList = local_10;
  return;
}

