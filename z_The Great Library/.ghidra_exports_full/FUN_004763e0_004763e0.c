// FUN_004763e0 @ 004763e0 body=[[004763e0, 00476445] [00476449, 0047648e] [00476492, 004764d7] [004764db, 00476520] [00476524, 00476569] [0047656d, 0047658f]]


void FUN_004763e0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b469b8;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("background",10);
  local_8 = 0;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x44))(local_48);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x2c) = uVar1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00dfb650,4);
  local_8 = 1;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x44))(local_48);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x30) = uVar1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("title",5);
  local_8 = 2;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x3c))(local_48);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x38) = uVar1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("value",5);
  local_8 = 3;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x3c))(local_48);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x3c) = uVar1;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("output_icon",0xb);
  local_8 = 4;
  uVar1 = (**(code **)(**(int **)(unaff_ESI + 0x20) + 0x44))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(unaff_ESI + 0x34) = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(**(int **)(unaff_ESI + 0x34) + 0x38))();
  ExceptionList = local_10;
  return;
}

