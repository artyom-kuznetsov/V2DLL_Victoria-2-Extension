// FUN_005d7b90 @ 005d7b90 body=[[005d7b90, 005d7cfa]]


void FUN_005d7b90(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb7b;
  local_14 = ExceptionList;
  if (param_2 == 0x2f3) {
    ExceptionList = &local_14;
    iVar2 = FUN_00aae9af(0x1b8);
    piVar4 = (int *)0x0;
    local_c = 0;
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_004460d0();
    }
    local_c = 0xffffffff;
    pcVar1 = *(code **)(*piVar4 + 0x6c);
    *(undefined1 *)(piVar4 + 0x12) = 1;
    (*pcVar1)(*(undefined4 *)(in_ECX + 0x100));
    FUN_005c93b0(*(undefined4 *)(in_ECX + 0xb8),*(undefined4 *)(in_ECX + 0xbc));
    (**(code **)(piVar4[2] + 0xc))(param_1);
    FUN_005d7810();
    FUN_00513c80();
  }
  else {
    if (param_2 == 0x48a) {
      ExceptionList = &local_14;
      uVar3 = FUN_00aaf0c5(param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x1b0) = uVar3;
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0xa52) {
      ExceptionList = &local_14;
      FUN_005c6a30(param_1,param_2);
      ExceptionList = local_14;
      return;
    }
    ExceptionList = &local_14;
    iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x1b4);
    if (iVar2 == 0) {
      FUN_009a1140();
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

