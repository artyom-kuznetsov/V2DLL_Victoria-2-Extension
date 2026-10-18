// FUN_00401830 @ 00401830 body=[[00401830, 00401880] [00401884, 004018ba] [004018be, 004018f5] [004018f9, 00401930] [00401934, 0040195a] [0040195e, 00401989] [0040198d, 004019b7] [004019bb, 004019d0] [004019d4, 004019e9] [004019ed, 00401a02] [00401a06, 00401a21]]


void FUN_00401830(int param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40abb;
  local_10 = ExceptionList;
  local_8 = 10;
  ExceptionList = &local_10;
  FUN_00401a30();
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_0040a190(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x250));
  }
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x240) != 0) {
    FUN_0040a190(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x240));
  }
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(param_1 + 0x230) != 0) {
    FUN_0040a110(*(undefined4 *)(param_1 + 0x234),param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x230));
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    FUN_0040a110(*(undefined4 *)(param_1 + 0x224),param_1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  if (0xf < *(uint *)(param_1 + 0x208)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 500));
  }
  *(undefined4 *)(param_1 + 0x208) = 0xf;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 500) = 0;
  if (0xf < *(uint *)(param_1 + 0x1e8)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(param_1 + 0x1d4));
  }
  *(undefined4 *)(param_1 + 0x1e8) = 0xf;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x1d4) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_0098b4c0();
  if (*(int *)(param_1 + 0x40) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x20));
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  ExceptionList = local_10;
  return;
}

