// FUN_00888ba0 @ 00888ba0 body=[[00888ba0, 00888c3a]]


void FUN_00888ba0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  
  FUN_008a88d0();
  local_38 = 0;
  local_48 = 0x2d2d2d;
  local_44 = 0;
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x3c) + 8);
  while (puVar1 != (undefined4 *)0x0) {
    local_40 = *puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    cVar4 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(local_50);
    if (cVar4 != '\0') {
      puVar2 = *(undefined4 **)(in_ECX + 8);
      while (puVar2 != (undefined4 *)0x0) {
        piVar3 = (int *)*puVar2;
        puVar2 = (undefined4 *)puVar2[2];
        (**(code **)(*piVar3 + 0x2c))(local_50,param_2);
      }
    }
  }
  return;
}

