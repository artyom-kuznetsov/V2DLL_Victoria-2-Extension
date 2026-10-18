// FUN_00757140 @ 00757140 body=[[00757140, 0075721c] [00757220, 0075723e] [00757242, 00757365]]


void FUN_00757140(void)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
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
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX[0xda] != 0) {
    ExceptionList = &local_10;
    (**(code **)(*(int *)(in_ECX[0xda] + 0x1c) + 0x38))();
    FUN_0099bd50(in_ECX[0x79]);
    pcVar1 = *(code **)(*in_ECX + 0x38);
    in_ECX[0xda] = 0;
    iVar3 = (*pcVar1)();
    *(undefined4 *)(iVar3 + 0x20b4) = 0;
  }
  in_ECX[0xda] = 0;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("exit_button",0xb);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("mainmenu_panel",0xe);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x1c1] + 0x6c))(local_2c);
  iVar3 = (**(code **)(*piVar4 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar3 + 0x54) + 8))(in_ECX + 0x58);
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
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  (**(code **)(*(int *)(in_ECX[0x1c2] + 0x18) + 0x38))();
  (**(code **)(*(int *)in_ECX[0x1c2] + 0x50))();
  iVar3 = in_ECX[0x77];
  if (*(char *)(iVar3 + 200) != '\0') {
    (**(code **)(**(int **)(iVar3 + 0x58) + 0x38))();
  }
  *(undefined1 *)(iVar3 + 200) = 0;
  (**(code **)(*(int *)in_ECX[0x77] + 0x30))();
  in_ECX[0x77] = 0;
  (**(code **)(*(int *)(in_ECX[0x1c1] + 0x18) + 0x38))();
  (**(code **)(*(int *)in_ECX[0x1c1] + 0x50))();
  in_ECX[0x1c1] = 0;
  iVar3 = 0;
  if (0 < (int)(in_ECX[0x1d4] - in_ECX[0x1d3] & 0xfffffffcU)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[0x1d3] + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < in_ECX[0x1d4] - in_ECX[0x1d3] >> 2);
  }
  if ((int *)in_ECX[0x6d] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x6d] + 4))(1);
  }
  iVar3 = in_ECX[0x14];
  if (*(char *)(iVar3 + 200) != '\0') {
    (**(code **)(**(int **)(iVar3 + 0x58) + 0x38))();
  }
  *(undefined1 *)(iVar3 + 200) = 0;
  (**(code **)(*(int *)in_ECX[0x14] + 0x30))();
  for (piVar4 = (int *)in_ECX[0x18]; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

