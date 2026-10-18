// FUN_009cc770 @ 009cc770 body=[[009cc770, 009cc8e8]]


void FUN_009cc770(int param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_c [4];
  undefined4 local_8;
  
  FUN_00401000((*(float *)(in_EAX + 0x228) + 0.0005) * 1000.0);
  iVar3 = FUN_00b31c00();
  iVar3 = iVar3 + param_1;
  if ((*(char *)(in_EAX + 0x39c) != '\0') &&
     ((iVar2 = *(int *)(in_EAX + 0x398), *(int *)(in_EAX + 0x398) < iVar3 ||
      (iVar2 = *(int *)(in_EAX + 0x394), iVar3 < *(int *)(in_EAX + 0x394))))) {
    iVar3 = iVar2;
  }
  FUN_00401000(((float)iVar3 / 1000.0 + 0.0005) * 1000.0);
  local_8 = FUN_00b31c00();
  piVar4 = (int *)FUN_00a6b880(local_c);
  *(float *)(in_EAX + 0x228) = (float)*piVar4 / 1000.0;
  if (param_2 != '\0') {
    *(undefined1 *)(in_EAX + 0x25a) = 1;
  }
  if (param_3 != '\0') {
    FUN_00401000((*(float *)(in_EAX + 0x228) + 0.0005) * 1000.0);
    uVar5 = FUN_00b31c00();
    for (puVar1 = *(undefined4 **)(in_EAX + 0x58); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      (**(code **)(*(int *)*puVar1 + 8))(in_EAX + 0x54,uVar5);
    }
    for (puVar1 = *(undefined4 **)(in_EAX + 0x58); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[2]) {
      (**(code **)(*(int *)*puVar1 + 4))();
    }
  }
  return;
}

