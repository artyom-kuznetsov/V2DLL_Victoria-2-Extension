// FUN_00a2c490 @ 00a2c490 body=[[00a2c490, 00a2c59c]]


undefined4 FUN_00a2c490(void)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0x74))();
  if (cVar1 == '\0') {
    iVar4 = FUN_00aae9af(0x180);
    local_8 = 1;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00a45830(in_ECX[0x23]);
    }
    local_8 = 0xffffffff;
    if ((short)in_ECX[0x57] == -1) {
      uVar2 = FUN_00a45df0();
      *(undefined2 *)(in_ECX + 0x57) = uVar2;
    }
    ExceptionList = local_10;
    return uVar3;
  }
  uVar3 = FUN_00ad3d30(in_ECX[0x36],1,1);
  if ((short)in_ECX[0x57] == -1) {
    uVar2 = FUN_009c08a0();
    *(undefined2 *)(in_ECX + 0x57) = uVar2;
  }
  iVar4 = FUN_00aae9af(0x1b0);
  local_8 = 0;
  if (iVar4 != 0) {
    uVar3 = FUN_009bf100(iVar4,in_ECX[0x23],uVar3);
    ExceptionList = local_10;
    return uVar3;
  }
  ExceptionList = local_10;
  return 0;
}

