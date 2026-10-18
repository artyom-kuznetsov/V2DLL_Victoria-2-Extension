// FUN_00a780a0 @ 00a780a0 body=[[00a780a0, 00a781b5]]


void FUN_00a780a0(void)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  int in_ECX;
  undefined8 *puVar3;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 local_8;
  
  _memset(&local_44,0,0x34);
  FUN_00ab047b();
  uVar2 = FUN_009b7610();
  uVar1 = DAT_00f092fc;
  local_34 = (ulonglong)(uint)(((float)(uVar2 & 0x7fffffff) * 4.656613e-10 - 0.3) * 2.2);
  local_8 = 0;
  local_10 = 0;
  uStack_c = 0;
  local_44 = 0;
  local_2c = 0;
  local_3c = 0;
  local_1c = DAT_00f092fc;
  if (-1 < in_EAX) {
    puVar3 = (undefined8 *)(in_EAX * 0x34 + *(int *)(in_ECX + 400));
    *puVar3 = 0;
    *(undefined8 *)((int)puVar3 + 0x1c) = local_28;
    puVar3[2] = local_34;
    *(undefined4 *)(puVar3 + 1) = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    *(undefined4 *)((int)puVar3 + 0x2c) = local_18;
    *(undefined4 *)((int)puVar3 + 0xc) = local_38;
    *(undefined4 *)((int)puVar3 + 0x24) = local_20;
    *(undefined4 *)(puVar3 + 5) = uVar1;
    *(undefined4 *)(puVar3 + 6) = local_14;
    return;
  }
  FUN_00a44850(in_ECX + 400);
  return;
}

