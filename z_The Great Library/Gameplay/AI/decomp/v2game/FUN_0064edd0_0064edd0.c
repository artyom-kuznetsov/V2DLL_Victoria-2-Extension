// FUN_0064edd0 @ 0064edd0 body=[[0064edd0, 0064ee7b] [0064ee7f, 0064ee9e] [0064eea2, 0064eeb3]]


void FUN_0064edd0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 local_48 [5];
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3acb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 0xb4))(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + param_1 * 4));
  cVar1 = (**(code **)(*in_ECX + 0x144))();
  if (cVar1 != '\0') {
    iVar2 = FUN_00868080();
    if (iVar2 != 0) {
      uVar3 = FUN_009888f0(local_48);
      local_8 = 0;
      uVar3 = FUN_00988fa0(uVar3);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_00868080(uVar3);
      FUN_00867670(uVar3);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

