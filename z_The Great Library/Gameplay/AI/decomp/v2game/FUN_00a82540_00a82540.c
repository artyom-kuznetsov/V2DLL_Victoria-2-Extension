// FUN_00a82540 @ 00a82540 body=[[00a82540, 00a8259b]]


void FUN_00a82540(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  code *pcVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_5c [16];
  undefined8 local_1c;
  undefined4 local_14;
  int iStack_10;
  
  local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x13c) + 0xa8);
  iStack_10 = in_ECX + 0x94;
  local_1c = CONCAT44(0xa82560,(undefined4)local_1c);
  FUN_00a4cb30();
  pcVar1 = *(code **)(**(int **)(in_ECX + 0x13c) + 0x7c);
  iStack_10 = param_7;
  local_1c = param_4;
  local_14 = param_5;
  puVar3 = auStack_5c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  (*pcVar1)();
  return;
}

