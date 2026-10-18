// FUN_0045fd70 @ 0045fd70 body=[[0045fd70, 0045fd89] [0045fd90, 0045fdc8]]


void FUN_0045fd70(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (0 < iVar4) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      cVar2 = (**(code **)(*(int *)(iVar1 + 0x40) + 0x18))(param_2);
      if (cVar2 != '\0') {
        (**(code **)(*(int *)(iVar1 + 0x5c) + 0x2c))(param_2,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}

