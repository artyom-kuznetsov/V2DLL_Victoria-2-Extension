// FUN_00760f10 @ 00760f10 body=[[00760f10, 00760fa7] [00760fab, 00760fc9] [00760fcd, 00761028]]


void FUN_00760f10(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8b610;
  local_10 = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("gamma_slider",0xc);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x34c) + 0x6c))(local_30);
  iVar2 = (**(code **)(*piVar1 + 0x4c))(local_4c);
  fVar3 = (float10)(**(code **)(*(int *)(iVar2 + 0x54) + 0x10))();
  local_14 = (float)fVar3;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (local_38 < 0x10) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = local_4c[0] & 0xffffff00;
    FUN_0099d200(*(undefined4 *)(in_ECX + 0x180));
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_4c[0]);
}

