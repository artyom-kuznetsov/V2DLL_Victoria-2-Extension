// FUN_005fdc00 @ 005fdc00 body=[[005fdc00, 005fdc5c] [005fdc60, 005fdcac] [005fdcb0, 005fdcd0]]


void FUN_005fdc00(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b511f7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CLoanDialog::vftable;
  local_8 = 3;
  if (in_ECX[8] != 0) {
    (**(code **)(*(int *)(in_ECX[8] + 0x18) + 0x38))();
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  if (0xf < (uint)in_ECX[0x25]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x20]);
  }
  in_ECX[0x25] = 0xf;
  in_ECX[0x24] = 0;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  in_ECX[0x15] = CButtonObserver::vftable;
  in_ECX[10] = CButtonObserver::vftable;
  *in_ECX = &PTR___purecall_00e38700;
  local_8 = 4;
  FUN_009a4ca0();
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  ExceptionList = local_10;
  return;
}

