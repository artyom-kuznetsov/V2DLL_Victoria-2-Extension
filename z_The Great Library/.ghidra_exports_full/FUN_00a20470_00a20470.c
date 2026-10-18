// FUN_00a20470 @ 00a20470 body=[[00a20470, 00a20600]]


float10 FUN_00a20470(float param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  float local_14;
  float local_10;
  undefined2 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined2 local_6;
  
  iVar2 = (**(code **)(*in_ECX + 0x16c))();
  if (iVar2 == 0) {
    return (float10)0;
  }
  (**(code **)(*in_ECX + 0xd4))(&local_14);
  local_8 = (undefined2)(int)local_14;
  local_6 = (undefined2)(int)local_10;
  piVar3 = (int *)(**(code **)(*in_ECX + 0x16c))();
  local_c = (undefined2)(int)param_1;
  local_a = (undefined2)(int)param_2;
  cVar1 = (**(code **)(*piVar3 + 0x40))(&local_c,&local_8,in_ECX[0x3e]);
  if (cVar1 != '\0') {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x16c))();
    cVar1 = (**(code **)(*piVar3 + 0x50))();
    if (cVar1 == '\0') {
      piVar3 = (int *)(**(code **)(*in_ECX + 0x16c))();
      local_c = (undefined2)(int)(param_1 - local_14);
      local_a = (undefined2)(int)(param_2 - local_10);
      iVar2 = *piVar3;
      uVar4 = (**(code **)(*in_ECX + 100))();
      cVar1 = (**(code **)(iVar2 + 0x48))(&local_c,uVar4);
      if (cVar1 == '\0') {
        return (float10)1;
      }
    }
    else {
      piVar3 = (int *)(**(code **)(*in_ECX + 0x16c))();
      local_c = (undefined2)(int)(param_1 - local_14);
      local_a = (undefined2)(int)(param_2 - local_10);
      iVar2 = *piVar3;
      uVar4 = (**(code **)(*in_ECX + 100))(in_ECX[0x3e]);
      cVar1 = (**(code **)(iVar2 + 0x4c))(&local_c,uVar4);
      if (cVar1 == '\0') {
        return (float10)1;
      }
    }
  }
  return (float10)0;
}

