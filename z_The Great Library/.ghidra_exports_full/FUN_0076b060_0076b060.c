// FUN_0076b060 @ 0076b060 body=[[0076b060, 0076b0dc] [0076b0e0, 0076b0e8] [0076b0f2, 0076b13b] [0076b145, 0076b18c] [0076b196, 0076b1ce] [0076b1d2, 0076b1fe] [0076b202, 0076b25d] [0076b268, 0076b28f] [0076b29a, 0076b2c1] [0076b2cc, 0076b2e9] [0076b2f0, 0076b2f8] [0076b307, 0076b32b] [0076b33a, 0076b35e] [0076b36d, 0076b393] [0076b397, 0076b416] [0076b41a, 0076b447] [0076b44b, 0076b478] [0076b47c, 0076b4ab]]


void FUN_0076b060(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b5036c;
  ExceptionList = &local_10;
  *in_ECX = CGameSetup::vftable;
  in_ECX[2] = CGameSetup::vftable;
  in_ECX[3] = CGameSetup::vftable;
  in_ECX[0xf] = CGameSetup::vftable;
  in_ECX[0x1b] = CGameSetup::vftable;
  local_8 = 0x1d;
  for (puVar1 = (undefined4 *)in_ECX[0xd9]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x38))();
    (**(code **)(*(int *)*puVar1 + 0x30))();
  }
  if (in_ECX[0xd9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd9]);
  }
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  in_ECX[0xdb] = 0;
  for (puVar1 = (undefined4 *)in_ECX[0xd5]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x38))();
    (**(code **)(*(int *)*puVar1 + 0x30))();
  }
  if (in_ECX[0xd5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd5]);
  }
  in_ECX[0xd5] = 0;
  in_ECX[0xd6] = 0;
  in_ECX[0xd7] = 0;
  for (puVar1 = (undefined4 *)in_ECX[0xc5]; puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*(int *)*puVar1 + 0x38))();
    (**(code **)(*(int *)*puVar1 + 0x30))();
  }
  if (in_ECX[0xc5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc5]);
  }
  in_ECX[0xc5] = 0;
  in_ECX[0xc6] = 0;
  in_ECX[199] = 0;
  if ((undefined4 *)in_ECX[0x9f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x9f])(1);
  }
  if (0xf < (uint)in_ECX[0x17a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x175]);
  }
  in_ECX[0x17a] = 0xf;
  in_ECX[0x179] = 0;
  *(undefined1 *)(in_ECX + 0x175) = 0;
  if (0xf < (uint)in_ECX[0x169]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x164]);
  }
  in_ECX[0x169] = 0xf;
  in_ECX[0x168] = 0;
  *(undefined1 *)(in_ECX + 0x164) = 0;
  in_ECX[0x150] = CButtonObserver::vftable;
  in_ECX[0x13c] = CButtonObserver::vftable;
  in_ECX[0x128] = CButtonObserver::vftable;
  in_ECX[0x114] = CButtonObserver::vftable;
  in_ECX[0x106] = CCheckBoxObserver::vftable;
  in_ECX[0xf2] = CButtonObserver::vftable;
  in_ECX[0xde] = CButtonObserver::vftable;
  if (in_ECX[0xd9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd9]);
  }
  in_ECX[0xd9] = 0;
  in_ECX[0xda] = 0;
  in_ECX[0xdb] = 0;
  if (in_ECX[0xd5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd5]);
  }
  in_ECX[0xd5] = 0;
  in_ECX[0xd6] = 0;
  in_ECX[0xd7] = 0;
  if (in_ECX[0xd1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xd1]);
  }
  in_ECX[0xd1] = 0;
  in_ECX[0xd2] = 0;
  in_ECX[0xd3] = 0;
  if (in_ECX[0xcd] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xcd]);
  }
  in_ECX[0xcd] = 0;
  in_ECX[0xce] = 0;
  in_ECX[0xcf] = 0;
  if (in_ECX[0xc9] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc9]);
  }
  in_ECX[0xc9] = 0;
  in_ECX[0xca] = 0;
  in_ECX[0xcb] = 0;
  if (in_ECX[0xc5] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xc5]);
  }
  in_ECX[0xc5] = 0;
  in_ECX[0xc6] = 0;
  in_ECX[199] = 0;
  if (0xf < (uint)in_ECX[0xb9]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xb4]);
  }
  in_ECX[0xb9] = 0xf;
  in_ECX[0xb8] = 0;
  *(undefined1 *)(in_ECX + 0xb4) = 0;
  in_ECX[0xac] = CTextBufferObserver::vftable;
  in_ECX[0xa8] = CChatMessageObserver::vftable;
  in_ECX[0xa0] = CTextBufferObserver::vftable;
  in_ECX[0x8a] = CButtonObserver::vftable;
  in_ECX[0x76] = CButtonObserver::vftable;
  in_ECX[0x62] = CButtonObserver::vftable;
  in_ECX[0x4c] = CButtonObserver::vftable;
  in_ECX[0x38] = CButtonObserver::vftable;
  in_ECX[0x24] = CButtonObserver::vftable;
  in_ECX[0x1b] = &PTR___purecall_00e38700;
  local_8 = CONCAT31(local_8._1_3_,0x1e);
  FUN_009a4ca0(in_ECX + 0x1b);
  if (0xf < (uint)in_ECX[0x21]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1c]);
  }
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0xf;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  in_ECX[0xf] = &PTR_FUN_00e3a544;
  FUN_009c1650();
  if ((uint)in_ECX[0x19] < 0x10) {
    in_ECX[0x19] = 0xf;
    in_ECX[0x18] = 0;
    *(undefined1 *)(in_ECX + 0x14) = 0;
    in_ECX[3] = &PTR_FUN_00e3a544;
    FUN_009c1650();
    if ((uint)in_ECX[0xd] < 0x10) {
      in_ECX[0xd] = 0xf;
      in_ECX[0xc] = 0;
      *(undefined1 *)(in_ECX + 8) = 0;
      in_ECX[2] = CSessionInfoObserver::vftable;
      *in_ECX = CFrontEndView::vftable;
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[8]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x14]);
}

