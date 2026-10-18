// FUN_0064c5c0 @ 0064c5c0 body=[[0064c5c0, 0064c62a] [0064c638, 0064c64d] [0064c65b, 0064c69e] [0064c6a2, 0064c6c5] [0064c6c9, 0064c7a1] [0064c7ac, 0064c7d3] [0064c7de, 0064c804] [0064c808, 0064c84b] [0064c856, 0064c8ef] [0064c8fa, 0064c921] [0064c92c, 0064c9fc] [0064ca07, 0064ca28] [0064ca2c, 0064ca4d] [0064ca51, 0064caa1] [0064caac, 0064cae3] [0064cae7, 0064cb4a] [0064cb53, 0064cb97] [0064cba7, 0064cbd9] [0064cbe9, 0064cc8b] [0064cc96, 0064ccbd] [0064ccc8, 0064ccef] [0064ccfa, 0064cd2f]]


/* WARNING: Removing unreachable block (ram,0x0064c696) */

void FUN_0064c5c0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b6ff1e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = CInGameIdler::vftable;
  in_ECX[0x22] = CInGameIdler::vftable;
  in_ECX[0x23] = CInGameIdler::vftable;
  local_8 = 0x5f;
  if (in_ECX[0x788] != 0) {
    FUN_0064cd30();
  }
  iVar1 = in_ECX[0x349];
  if (iVar1 != 0) {
    FUN_0046ea10(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  iVar1 = in_ECX[0x348];
  if (iVar1 != 0) {
    FUN_0046e170(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  FUN_00409350("interface/menubar.gui",0x15);
  local_8._0_1_ = 0x60;
  FUN_009a4ca0(in_ECX + 0x23);
  local_8 = CONCAT31(local_8._1_3_,0x5f);
  FUN_00475500();
  FUN_009d7fa0();
  iVar1 = in_ECX[0x783];
  if (iVar1 != 0) {
    FUN_0044f650(iVar1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  if (DAT_01258a74 != 0) {
    FUN_004be200();
  }
  if ((undefined4 *)in_ECX[0x660] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x660])(1);
  }
  (**(code **)(*(int *)in_ECX[0x745] + 8))((int *)in_ECX[0x745]);
  if ((undefined4 *)in_ECX[0x75e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x75e])(1);
  }
  if ((int *)in_ECX[0x760] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x760] + 4))(1);
  }
  if ((int *)in_ECX[0x761] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x761] + 4))(1);
  }
  FUN_008601b0(in_ECX + 0x77b);
  if ((int *)in_ECX[0x789] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x789] + 4))(1);
  }
  in_ECX[0x79e] = CButtonObserver::vftable;
  in_ECX[0x78a] = CButtonObserver::vftable;
  local_8._0_1_ = 0x5c;
  if ((int *)in_ECX[0x780] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x780] + 4))(1);
  }
  if (in_ECX[0x77b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x77b]);
  }
  in_ECX[0x77b] = 0;
  in_ECX[0x77c] = 0;
  in_ECX[0x77d] = 0;
  if (in_ECX[0x777] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x777]);
  }
  in_ECX[0x777] = 0;
  in_ECX[0x778] = 0;
  in_ECX[0x779] = 0;
  if (0xf < (uint)in_ECX[0x767]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x762]);
  }
  in_ECX[0x767] = 0xf;
  in_ECX[0x766] = 0;
  *(undefined1 *)(in_ECX + 0x762) = 0;
  in_ECX[0x750] = CTextBufferObserver::vftable;
  in_ECX[0x74c] = CChatMessageObserver::vftable;
  if (in_ECX[0x73e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x73e]);
  }
  in_ECX[0x73e] = 0;
  in_ECX[0x73f] = 0;
  in_ECX[0x740] = 0;
  local_8._0_1_ = 0x61;
  if ((undefined4 *)in_ECX[0x721] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x721])(1);
  }
  in_ECX[0x661] = C3dObject::vftable;
  FUN_009f8f70();
  local_8._0_1_ = 0x54;
  if ((undefined4 *)in_ECX[0x65e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x65e])(1);
  }
  local_8._0_1_ = 0x53;
  FUN_0098b4c0();
  in_ECX[0x5e4] = CButtonObserver::vftable;
  in_ECX[0x5d0] = CButtonObserver::vftable;
  in_ECX[0x5bc] = CButtonObserver::vftable;
  in_ECX[0x5a8] = CButtonObserver::vftable;
  in_ECX[0x594] = CButtonObserver::vftable;
  if (in_ECX[0x586] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x586]);
  }
  in_ECX[0x586] = 0;
  in_ECX[0x587] = 0;
  in_ECX[0x588] = 0;
  if (in_ECX[0x580] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x580]);
  }
  in_ECX[0x580] = 0;
  in_ECX[0x581] = 0;
  in_ECX[0x582] = 0;
  local_8 = CONCAT31(local_8._1_3_,0x4b);
  _eh_vector_destructor_iterator_(in_ECX + 0x554,0x10,10,FUN_004e9430);
  in_ECX[0x53a] = CButtonObserver::vftable;
  in_ECX[0x526] = CButtonObserver::vftable;
  in_ECX[0x512] = CButtonObserver::vftable;
  in_ECX[0x4fe] = CButtonObserver::vftable;
  in_ECX[0x4ea] = CButtonObserver::vftable;
  in_ECX[0x4d6] = CButtonObserver::vftable;
  in_ECX[0x4c2] = CButtonObserver::vftable;
  in_ECX[0x4ae] = CButtonObserver::vftable;
  in_ECX[0x49a] = CButtonObserver::vftable;
  in_ECX[0x486] = CButtonObserver::vftable;
  in_ECX[0x472] = CButtonObserver::vftable;
  in_ECX[0x45e] = CButtonObserver::vftable;
  in_ECX[0x44a] = CButtonObserver::vftable;
  in_ECX[0x436] = CButtonObserver::vftable;
  in_ECX[0x422] = CButtonObserver::vftable;
  in_ECX[0x40e] = CButtonObserver::vftable;
  in_ECX[0x3fa] = CButtonObserver::vftable;
  in_ECX[0x3e6] = CButtonObserver::vftable;
  in_ECX[0x3d2] = CButtonObserver::vftable;
  in_ECX[0x3be] = CButtonObserver::vftable;
  in_ECX[0x3aa] = CButtonObserver::vftable;
  in_ECX[0x396] = CButtonObserver::vftable;
  in_ECX[0x382] = CButtonObserver::vftable;
  in_ECX[0x36e] = CButtonObserver::vftable;
  if (in_ECX[0x368] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x368]);
  }
  in_ECX[0x368] = 0;
  in_ECX[0x369] = 0;
  in_ECX[0x36a] = 0;
  if (in_ECX[0x364] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x364]);
  }
  in_ECX[0x364] = 0;
  in_ECX[0x365] = 0;
  in_ECX[0x366] = 0;
  if (in_ECX[0x360] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x360]);
  }
  in_ECX[0x360] = 0;
  in_ECX[0x361] = 0;
  in_ECX[0x362] = 0;
  in_ECX[0x34a] = CButtonObserver::vftable;
  in_ECX[0x334] = CButtonObserver::vftable;
  in_ECX[800] = CButtonObserver::vftable;
  in_ECX[0x30c] = CButtonObserver::vftable;
  in_ECX[0x2f8] = CButtonObserver::vftable;
  FUN_00679dd0();
  if (in_ECX[0x2ed] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2ed]);
  }
  in_ECX[0x2ed] = 0;
  in_ECX[0x2ee] = 0;
  in_ECX[0x2ef] = 0;
  in_ECX[0x2d6] = CButtonObserver::vftable;
  FUN_00648a60();
  if ((uint)in_ECX[0x2a9] < 0x10) {
    in_ECX[0x2a9] = 0xf;
    in_ECX[0x2a8] = 0;
    *(undefined1 *)(in_ECX + 0x2a4) = 0;
    in_ECX[0x290] = CButtonObserver::vftable;
    in_ECX[0x27c] = CButtonObserver::vftable;
    in_ECX[0x268] = CButtonObserver::vftable;
    in_ECX[0x254] = CButtonObserver::vftable;
    in_ECX[0x240] = CButtonObserver::vftable;
    in_ECX[0x22c] = CButtonObserver::vftable;
    in_ECX[0x21e] = CCheckBoxObserver::vftable;
    in_ECX[0x210] = CCheckBoxObserver::vftable;
    in_ECX[0x1fc] = CButtonObserver::vftable;
    if (in_ECX[0x1f8] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x1f8]);
    }
    in_ECX[0x1f8] = 0;
    in_ECX[0x1f9] = 0;
    in_ECX[0x1fa] = 0;
    in_ECX[0x1ea] = CCheckBoxObserver::vftable;
    in_ECX[0x1dc] = CCheckBoxObserver::vftable;
    in_ECX[0x1c8] = CButtonObserver::vftable;
    if (in_ECX[0x1c2] != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x1c2]);
    }
    in_ECX[0x1c2] = 0;
    in_ECX[0x1c3] = 0;
    in_ECX[0x1c4] = 0;
    if (in_ECX[0x1be] != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x1be]);
    }
    in_ECX[0x1be] = 0;
    in_ECX[0x1bf] = 0;
    in_ECX[0x1c0] = 0;
    in_ECX[0x1b6] = CTextBufferObserver::vftable;
    in_ECX[0x1a2] = CButtonObserver::vftable;
    in_ECX[0x18e] = CButtonObserver::vftable;
    in_ECX[0x17a] = CButtonObserver::vftable;
    in_ECX[0x166] = CButtonObserver::vftable;
    in_ECX[0x152] = CButtonObserver::vftable;
    in_ECX[0x13e] = CButtonObserver::vftable;
    in_ECX[0x12a] = CButtonObserver::vftable;
    in_ECX[0x11c] = CCheckBoxObserver::vftable;
    in_ECX[0x108] = CButtonObserver::vftable;
    in_ECX[0xf4] = CButtonObserver::vftable;
    in_ECX[0xe0] = CButtonObserver::vftable;
    in_ECX[0xd8] = CTextBufferObserver::vftable;
    in_ECX[0xc4] = CButtonObserver::vftable;
    in_ECX[0xb0] = CButtonObserver::vftable;
    in_ECX[0x9c] = CButtonObserver::vftable;
    in_ECX[0x88] = CButtonObserver::vftable;
    in_ECX[0x74] = CButtonObserver::vftable;
    in_ECX[0x60] = CButtonObserver::vftable;
    if (in_ECX[0x59] == 0) {
      in_ECX[0x59] = 0;
      in_ECX[0x5a] = 0;
      in_ECX[0x5b] = 0;
      if (in_ECX[0x54] != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(in_ECX[0x54]);
      }
      in_ECX[0x54] = 0;
      in_ECX[0x55] = 0;
      in_ECX[0x56] = 0;
      if (in_ECX[0x50] == 0) {
        in_ECX[0x50] = 0;
        in_ECX[0x51] = 0;
        in_ECX[0x52] = 0;
        in_ECX[0x3c] = CButtonObserver::vftable;
        in_ECX[0x24] = CButtonObserver::vftable;
        FUN_00647e40();
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(in_ECX[0x50]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x59]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(in_ECX[0x2a4]);
}

