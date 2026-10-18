// FUN_007b1b40 @ 007b1b40 body=[[007b1b40, 007b1b9b] [007b1ba6, 007b1be2] [007b1be6, 007b1c04] [007b1c08, 007b1c26] [007b1c2a, 007b1c47] [007b1c4b, 007b1c7b] [007b1c7f, 007b1c9c]]


void FUN_007b1b40(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4fe1d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CMicrotransactionInterface::vftable;
  local_8 = 7;
  if ((int *)in_ECX[8] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[8] + 0x50))();
  }
  puVar1 = (undefined4 *)in_ECX[0x1d];
  iVar2 = in_ECX[0x1e] - (int)puVar1 >> 2;
  if ((iVar2 != 0) && (puVar1 != puVar1 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar1);
  }
  FreeLibrary((HMODULE)in_ECX[0x1c]);
  in_ECX[0x5d] = CButtonObserver::vftable;
  in_ECX[0x52] = CButtonObserver::vftable;
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_009fa260(in_ECX + 0x25);
  if (in_ECX[0x21] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x21]);
  }
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  if (in_ECX[0x1d] == 0) {
    in_ECX[0x1d] = 0;
    in_ECX[0x1e] = 0;
    in_ECX[0x1f] = 0;
    in_ECX[0x19] = CRadioButtonGroupObserver::vftable;
    if (0xf < (uint)in_ECX[0x15]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x10]);
    }
    in_ECX[0x15] = 0xf;
    in_ECX[0x14] = 0;
    *(undefined1 *)(in_ECX + 0x10) = 0;
    if ((uint)in_ECX[0xe] < 0x10) {
      in_ECX[0xe] = 0xf;
      in_ECX[0xd] = 0;
      *(undefined1 *)(in_ECX + 9) = 0;
      *in_ECX = &PTR___purecall_00e38700;
      local_8 = 8;
      FUN_009a4ca0();
      if ((uint)in_ECX[6] < 0x10) {
        in_ECX[5] = 0;
        in_ECX[6] = 0xf;
        *(undefined1 *)(in_ECX + 1) = 0;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[1]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x1d]);
}

