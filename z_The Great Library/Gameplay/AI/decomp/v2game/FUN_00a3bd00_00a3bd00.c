// FUN_00a3bd00 @ 00a3bd00 body=[[00a3bd00, 00a3bdbd]]


int * FUN_00a3bd00(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_00aae9af(0x16c);
  local_8 = 0;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x58);
    FUN_009d9070(piVar3,param_1);
    iVar2 = DAT_00f14418;
    *piVar3 = (int)&PTR_FUN_00e43aa8;
    piVar3[0x54] = 0;
    piVar3[0x55] = 0;
    piVar3[0x56] = 0;
    piVar3[0x58] = iVar1;
    piVar3[0x59] = in_ECX;
    piVar3[0x5a] = iVar2;
  }
  local_8 = 0xffffffff;
  local_14 = CONCAT22(*(undefined2 *)(in_ECX + 0x60),*(undefined2 *)(in_ECX + 0x5c));
  (**(code **)(*piVar3 + 0x100))(local_14);
  ExceptionList = local_10;
  return piVar3;
}

