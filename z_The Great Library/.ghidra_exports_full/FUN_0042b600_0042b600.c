// FUN_0042b600 @ 0042b600 body=[[0042b600, 0042b6e0] [0042b6e4, 0042b71b]]


int * FUN_0042b600(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    uVar5 = param_2[1] - *param_2 >> 6;
    if (uVar5 == 0) {
      FUN_0042b980(param_1,&param_2,*param_1,param_1[1]);
      return param_1;
    }
    iVar4 = *param_1;
    if (uVar5 <= (uint)(param_1[1] - iVar4 >> 6)) {
      puVar3 = (undefined4 *)FUN_0042c960(param_2);
      puVar1 = (undefined4 *)param_1[1];
      for (; puVar3 != puVar1; puVar3 = puVar3 + 0x10) {
        (**(code **)*puVar3)(0);
      }
      param_1[1] = (param_2[1] - *param_2 & 0xffffffc0U) + *param_1;
      return param_1;
    }
    if (uVar5 <= (uint)(param_1[2] - iVar4 >> 6)) {
      FUN_0042c960(param_2);
      iVar4 = FUN_0042cd40(param_2);
      param_1[1] = iVar4;
      return param_1;
    }
    if (iVar4 != 0) {
      FUN_0042b890();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*param_1);
    }
    cVar2 = FUN_006a27d0();
    if (cVar2 != '\0') {
      iVar4 = FUN_0042cd40(param_2);
      param_1[1] = iVar4;
    }
  }
  return param_1;
}

