// FUN_00525d90 @ 00525d90 body=[[00525d90, 00525e83]]


bool FUN_00525d90(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  if (DAT_0125873f != '\0') {
    return true;
  }
  if (((param_1 == *(int *)(in_EAX + 0x54)) && (*(int *)(param_1 + 0x5c) == 5)) &&
     (cVar2 = FUN_005268f0(), cVar2 != '\0')) {
    FUN_008a8650(1);
    local_48 = *(undefined4 *)(in_ECX + 0x1c);
    local_44 = *(undefined4 *)(in_ECX + 0x20);
    if (*(char *)(*(int *)(in_EAX + 0x54) + 0x59) != '\0') {
      iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x870) + *(int *)(param_1 + 0x50) * 4) + 0x50);
      if (iVar4 + 1 < *(int *)(in_EAX + 0x50)) {
        return false;
      }
      if (*(int *)(in_EAX + 0x50) < iVar4 + -1) {
        return false;
      }
    }
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x870) + *(int *)(param_1 + 0x50) * 4) + 0x50);
    if (((iVar4 <= *(int *)(in_EAX + 0x50)) && (*(int *)(in_EAX + 0x50) != iVar4)) &&
       (cVar2 = (**(code **)(*(int *)(in_EAX + 0x58) + 0x18))(local_50), cVar2 != '\0')) {
      iVar4 = *(int *)(in_EAX + 0x1c0);
      piVar3 = (int *)FUN_00542bc0(in_ECX,&stack0xffffffa8);
      iVar1 = *(int *)(in_ECX + 0xe3c);
      iVar4 = __alldiv((longlong)(*piVar3 + 1000) * (longlong)iVar4,1000,0);
      return iVar4 < iVar1;
    }
  }
  return false;
}

