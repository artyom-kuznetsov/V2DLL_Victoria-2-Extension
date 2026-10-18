// FUN_009d6780 @ 009d6780 body=[[009d6780, 009d6800]]


int * FUN_009d6780(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00b498f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined ***)((int)param_1 + *(int *)(*param_1 + 4)) = &PTR_FUN_00e3b4b4;
  iVar1 = *(int *)(*param_1 + 4);
  FUN_004f6210();
  *(undefined4 *)((int)param_1 + iVar1 + 0x38) = param_2;
  *(undefined4 *)((int)param_1 + iVar1 + 0x3c) = 0;
  uVar2 = FUN_009d6a50();
  *(undefined2 *)((int)param_1 + iVar1 + 0x40) = uVar2;
  if (*(int *)((int)param_1 + iVar1 + 0x38) == 0) {
    FUN_00401120(*(uint *)((int)param_1 + iVar1 + 0xc) | 4,0);
  }
  ExceptionList = local_10;
  return param_1;
}

