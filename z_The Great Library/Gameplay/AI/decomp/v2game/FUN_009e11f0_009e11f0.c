// FUN_009e11f0 @ 009e11f0 body=[[009e11f0, 009e129e]]


void FUN_009e11f0(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x15c)) {
    uVar1 = FUN_009e15c0(param_3);
    *(undefined4 *)(param_1 + 0x15c) = uVar1;
  }
  iVar3 = 0;
  iVar2 = param_2[1] - *param_2 >> 5;
  if (0 < iVar2) {
    do {
      FUN_007797f0();
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if ((char)param_3 != '\0') {
    FUN_009e12a0(param_1);
  }
  return;
}

