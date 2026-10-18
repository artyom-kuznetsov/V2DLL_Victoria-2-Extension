// FUN_00642220 @ 00642220 body=[[00642220, 00642333]]


int * FUN_00642220(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int *piVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_00aae9af(0x1d8);
  piVar4 = (int *)0x0;
  local_8 = 0;
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_009ed8a0(iVar2,*in_ECX,in_ECX + 0x6b1,param_3,param_2,0,DAT_00f17b54);
  }
  local_8 = 0xffffffff;
  (**(code **)(*piVar4 + 0x48))(2);
  (**(code **)(*piVar4 + 0x38))();
  (**(code **)(in_ECX[0x6b1] + 0x10))(piVar4);
  if (*(int *)(in_ECX[0x836] + *(int *)(*(int *)(param_1 + 8) + 0xb4) * 4) != 0) {
    FUN_00644a70(in_ECX,piVar4,1);
  }
  (**(code **)(*piVar4 + 0x34))();
  iVar2 = *(int *)(param_1 + 0x18);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = piVar4;
    puVar3[1] = iVar2;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  *(undefined4 **)(param_1 + 0x18) = puVar3;
  *(int *)(param_1 + 0x1c) = iVar1 + 1;
  if (iVar1 == 0) {
    *(undefined4 **)(param_1 + 0x14) = puVar3;
  }
  else {
    *(undefined4 **)(iVar2 + 8) = puVar3;
  }
  ExceptionList = local_10;
  return piVar4;
}

