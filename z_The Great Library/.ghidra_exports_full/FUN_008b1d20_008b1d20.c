// FUN_008b1d20 @ 008b1d20 body=[[008b1d20, 008b1dad] [008b1db1, 008b1dc1]]


void FUN_008b1d20(void)

{
  int in_ECX;
  undefined1 auStack_a8 [28];
  undefined4 uStack_8c;
  undefined1 auStack_88 [72];
  undefined4 uStack_40;
  undefined *puStack_3c;
  undefined1 local_30 [20];
  uint local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9700d;
  local_10 = ExceptionList;
  puStack_3c = *(undefined **)(in_ECX + 0xa4);
  uStack_40 = *(undefined4 *)(in_ECX + 0xa0);
  local_14 = auStack_88;
  uStack_8c = 0x8b1d64;
  ExceptionList = &local_10;
  FUN_008a88d0();
  uStack_8c = 0;
  local_14 = auStack_a8;
  local_8 = 0;
  FUN_008afc10(*(undefined4 *)(in_ECX + 8));
  local_8 = 0xffffffff;
  FUN_008adbe0(local_30);
  local_8 = 1;
  puStack_3c = (undefined *)0x8b1d9f;
  FUN_00989330();
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    puStack_3c = &UNK_008b1dae;
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return;
}

