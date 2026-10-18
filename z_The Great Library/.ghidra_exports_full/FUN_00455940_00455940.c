// FUN_00455940 @ 00455940 body=[[00455940, 004559ea] [004559ee, 00455a14] [00455a18, 00455a46] [00455a4a, 00455a5b]]


void FUN_00455940(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *unaff_EDI;
  undefined4 local_64 [5];
  uint local_50;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b45558;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  (**(code **)(**(int **)(param_1 + 0x38) + 0x48))(unaff_EDI[0x3c]);
  uVar1 = (**(code **)(*unaff_EDI + 0x18))(local_48);
  local_8 = 0;
  uVar1 = FUN_0043ec10(local_2c,&DAT_00df9d50,uVar1,"STATE",param_3);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00408ed0(uVar1,0,0xffffffff);
  FUN_00a5ecc0(uVar1,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0xffffffff;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  uVar1 = (**(code **)(*unaff_EDI + 0x30))(local_64);
  local_8 = 2;
  FUN_00408ed0(uVar1,0,0xffffffff);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}

