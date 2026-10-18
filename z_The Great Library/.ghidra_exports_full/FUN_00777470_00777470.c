// FUN_00777470 @ 00777470 body=[[00777470, 007774fc] [00777500, 007776be] [007776c2, 007776e2] [007776e6, 0077771d] [00777721, 0077773c] [00777740, 00777756]]


void FUN_00777470(void)

{
  int iVar1;
  int in_ECX;
  int iStack_8c;
  uint auStack_7c [4];
  undefined4 uStack_6c;
  uint uStack_68;
  uint uStack_60;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined **ppuStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb9d0a;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(**(int **)(in_ECX + -8) + 0x100))();
  (**(code **)(**(int **)(iVar1 + 0xe4) + 0x10))(1);
  (**(code **)(**(int **)(in_ECX + -8) + 0x100))();
  FUN_0063ef30();
  iVar1 = (**(code **)(**(int **)(in_ECX + -8) + 0x100))();
  (**(code **)(**(int **)(iVar1 + 0xe4) + 0x10))(0);
  if (*(int *)(in_ECX + 0x5a4) != 0) {
    FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(in_ECX + 0x5a4) = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + -8) + 0x100))();
  if (*(char *)(*(int *)(iVar1 + 300) + 0x34) != '\0') {
    iVar1 = (**(code **)(**(int **)(in_ECX + -8) + 0x100))();
    if (((*(int *)(iVar1 + 300) != 0) && (DAT_01258b2d = 0, DAT_01258b34 < 1)) &&
       (DAT_01258b30 != (undefined4 *)0x0)) {
      (**(code **)*DAT_01258b30)();
      DAT_01258b30 = (undefined4 *)0x0;
    }
  }
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined4 *)(in_ECX + 0x5a0) = 0xffffffff;
  FUN_00688050();
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_007fcbd0();
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x38))();
  FUN_00819830();
  iVar1 = FUN_00475500();
  *(undefined4 *)(iVar1 + 0xec) = 0xff9a;
  iVar1 = FUN_00475500();
  *(undefined4 *)(iVar1 + 0xf0) = 2;
  uStack_68 = 0xf;
  uStack_6c = 0;
  auStack_7c[0] = auStack_7c[0] & 0xffffff00;
  FUN_00409350("REVERT_SAVE_CAL",0xf);
  pvStack_14 = (void *)0x0;
  FUN_009a8ee0(&stack0xffffff70,auStack_7c);
  pvStack_14._0_1_ = 1;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  pvStack_14._0_1_ = 2;
  uStack_40 = 0x18d;
  ppuStack_44 = &PTR_FUN_00e3cffc;
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  FUN_00408ed0();
  ppuStack_44 = &PTR_FUN_00e3d020;
  pvStack_14._0_1_ = 3;
  FUN_00771510();
  ppuStack_44 = &PTR_FUN_00e3cffc;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  uStack_3c = uStack_3c & 0xffffff00;
  if (0xf < uStack_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_4c = 0xf;
  uStack_50 = 0;
  uStack_60 = uStack_60 & 0xffffff00;
  pvStack_14 = (void *)CONCAT31(pvStack_14._1_3_,4);
  FUN_009adb70();
  if (iStack_8c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_1c;
  return;
}

